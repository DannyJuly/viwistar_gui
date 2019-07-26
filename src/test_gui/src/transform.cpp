#include "ros/ros.h"
#include "ros/network.h"
#include "ros/console.h"
//#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/test_gui/transform.hpp"
#include <QDebug>
#include <iostream>


namespace test_gui
{

Transform::Transform(int argc, char** argv)
    : init_argc(argc),init_argv(argv)
{}

Transform::~Transform()
{
  if(ros::isStarted()) //whether the node is started by ros::start()
  {
    ros::shutdown();
    ros::waitForShutdown();
  }
  terminate();
  wait();
}

bool Transform::init()
{
    ros::init(init_argc,init_argv,"calibration_transform");
    if (!ros::master::check()) //check whether the master is up
    {
        return false;
    }
    ros::start(); // explicitly needed since our nodehandle is going out of scope.
    ros::NodeHandle nh;
    transform_subscriber = nh.subscribe("pose_matrix",10,&Transform::posCallback,this);
    start(); //QThread::start -> run()
    return true;
}

bool Transform::init(const std::string &master_url, const std::string &host_url)
{
  std::map<std::string,std::string> remappings;
  remappings["__master"] = master_url;//let __master = master_url
  remappings["__hostname"] = host_url;//__master:=http://foo:11311' or './my_node __master:=http://foo:11311' using the remapping arguments you foun
  ros::init(remappings,"transform"); //remappings is pointer array
  if (!ros::master::check())
  {
      return false;
  }
  ros::start(); // explicitly needed since our nodehandle is going out of scope.
  ros::NodeHandle nh;
  transform_subscriber = nh.subscribe("pose_matrix",10,&Transform::posCallback,this);
  start(); //QThread::start -> run()
  return true;

}

void Transform::posCallback(const std_msgs::Float64MultiArrayConstPtr &msg)
{
  tf::Quaternion q_camera(msg->data.at(3),msg->data.at(4),msg->data.at(5),msg->data.at(6));
  tf::Vector3 v_camera(msg->data.at(0),msg->data.at(1),msg->data.at(2));
  width = msg->data.at(7);
  T_camera.setOrigin((v_camera));
  T_camera.setRotation(q_camera);
  qDebug()<<T_camera.getRotation().x();

}

void Transform::run()
{
  tf::Transform T_robot;
  tf::Quaternion q_robot;
  tf::Vector3 v_robot;

  ros::Rate rate(3);
  while(ros::ok())
  {
    T_robot.mult(T_robot_to_camera,T_camera);
    qDebug()<<T_robot_to_camera.getRotation().x();
    q_robot = T_robot.getRotation();
    v_robot = T_robot.getOrigin();
    qDebug()<<T_robot.getRotation().x();
    ros::spinOnce();
    rate.sleep();
  }


}

void Transform::setTransform(double x, double y, double z, double r_x, double r_y,double r_z, double r_w)
{
  tf::Quaternion q_robot_to_camera(r_x,r_y,r_z,r_w);
  tf::Vector3 v_robot_to_camera(x,y,z);
  T_robot_to_camera.setOrigin(v_robot_to_camera);
  T_robot_to_camera.setRotation(q_robot_to_camera);

}


}
