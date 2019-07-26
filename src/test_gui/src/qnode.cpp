/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2018
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <ros/console.h>
//#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/test_gui/qnode.hpp"
#include <QDebug>
//#include "test_gui/SrvTransform.h"
/*****************************************************************************
** Namespaces
*****************************************************************************/
namespace test_gui
{

/*****************************************************************************
** Implementation
*****************************************************************************/
QNode::QNode(int argc, char** argv )
    : init_argc(argc), init_argv(argv)
{}

QNode::~QNode()  //shutdown the node when exit the gui
{

    if(ros::isStarted())
    {
        ros::shutdown(); // explicitly needed since we use ros::start();
        ros::waitForShutdown(); //wait for this node to be shutdown
    }
    terminate();
    wait();
    delete robot_choice;
    delete robot_simulation;
    delete robot_node;
    //delete rosc;
}

bool QNode::init()
{
    ros::init(init_argc,init_argv,"test_gui");
    if (!ros::master::check()) //check whether the master is up
    {
        return false;
    }
    ros::start(); // explicitly needed since our nodehandle is going out of scope.
    //ros::NodeHandle n;
    //ros::NodeHandle nSub;
    ros::NodeHandle nh;
    // Add your ros communications here.
    //chatter_publisher = n.advertise<std_msgs::String>("testgui_chat", 1000);
    //ros::Subscriber realtime_pos=nSub.subscribe("tf");
    origin_target_client = nh.serviceClient<test_gui::SrvTransform>("origin_target_position");
    //chatter_subscriber = nSub.subscribe("testgui_chat", 100, &QNode::RecvTopicCallback, this);

    //ros::spin();
    start(); //QThread::start -> run()
    return true;
}

bool QNode::init(const std::string &master_url, const std::string &host_url)
{
    std::map<std::string,std::string> remappings;
    remappings["__master"] = master_url; //let __master = master_url
    remappings["__hostname"] = host_url;//__master:=http://foo:11311' or './my_node __master:=http://foo:11311' using the remapping arguments you foun
    ros::init(remappings,"test_gui"); //remappings is pointer array
    if (!ros::master::check())
    {
        return false;
    }
    ros::start(); // explicitly needed since our nodehandle is going out of scope.
    //ros::NodeHandle n;
   // ros::NodeHandle nSub;
    ros::NodeHandle nh;
    // Add your ros communications here.
    //ros::ServiceClient eef_position_client = n.serviceClient<ros
    //chatter_publisher = n.advertise<std_msgs::String>("testgui_chat", 1000);
    origin_target_client = nh.serviceClient<test_gui::SrvTransform>("origin_target_position");
    //chatter_subscriber = nSub.subscribe("testgui_chat", 100, &QNode::RecvTopicCallback, this);
    start();
    return true;
}


//void QNode::RecvTopicCallback(const std_msgs::StringConstPtr &msg)
//{
//    log_listen(Info, std::string("I heard: ")+msg->data.c_str());
//    //c_str()返回一个带有\0的指向正规string指针常量(为了与c语言兼容）data()不保证有没有null-terminate
//}

void QNode::run()   //from QThread, after start()
{
    //ros::Rate loop_rate(1);
    tf2_ros::Buffer tfBuffer;
    tf2_ros::TransformListener tfListenser(tfBuffer); //realtime pisition
   // QString tempStr;
    //ros::Duration initDur(2);
    bool flag_service_once = true;
//    qDebug()<<"position:"<<position_srv.request.target.translation.x<<endl;
//    qDebug()<<flag_service_once<<std::endl;
    while (flag_service_once)
    {
      if(origin_target_client.call(position_srv))
      {flag_service_once = false;}
    }
    //qDebug()<<"haha"<<flag_service_once<<std::endl;
    //int count = 0;
    ros::Rate loop_rate(5);
    while (ros::ok())
    {
         try{
            transformStamped = tfBuffer.lookupTransform("world", "panda_hand",
                                     ros::Time(0));
          }
         catch (tf2::TransformException &ex) {
            ROS_WARN("%s",ex.what());
            ros::Duration(1.0).sleep();
            continue;
          }

      Q_EMIT realtimeposition();
      ros::spinOnce();
      loop_rate.sleep();
        //initDur.sleep();
       // ++count;
    }
    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
   // terminate();
    //wait();
    //Q_EMIT rosShutdown(); // emit 避免冲突，调用这个信号connect时所关联的槽函数
                        //used to signal the gui for a shutdown (useful to roslaunch)
}



void QNode::set_origin(double x, double y, double z,double r_x,double r_y,double r_z,double r_w,double gripper)
{
    position_srv.request.origin.translation.x = x;
    position_srv.request.origin.translation.y = y;
    position_srv.request.origin.translation.z = z;
    position_srv.request.origin.rotation.x = r_x;
    position_srv.request.origin.rotation.y = r_y;
    position_srv.request.origin.rotation.z = r_z;
    position_srv.request.origin.rotation.w = r_w;
    position_srv.request.gripper = gripper;
}

void QNode::set_target(double x, double y, double z,double r_x,double r_y,double r_z,double r_w)
{
    position_srv.request.target.translation.x = x;
    position_srv.request.target.translation.y = y;
    position_srv.request.target.translation.z = z;
    position_srv.request.target.rotation.x = r_x;
    position_srv.request.target.rotation.y = r_y;
    position_srv.request.target.rotation.z = r_z;
    position_srv.request.target.rotation.w = r_w;

}


}  // namespace test_gui
