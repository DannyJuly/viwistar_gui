#ifndef TRANSFORM_H
#define TRANSFORM_H


#include "ros/ros.h"
#include <std_msgs/String.h>
#include <std_msgs/Float64MultiArray.h>
#include <sensor_msgs/JointState.h>
#include <tf/transform_broadcaster.h>
#include <string>
#include <QThread>
#include <QStringListModel>
#include <QProcess>
#include <QWidget>
#include <tf2_ros/transform_listener.h>
#include <geometry_msgs/TransformStamped.h>
#include <sensor_msgs/Image.h>
#include <tf/LinearMath/Transform.h>
#include <tf/LinearMath/Quaternion.h>
#include <tf/LinearMath/Vector3.h>

namespace test_gui
{

class Transform : public QThread
{
  Q_OBJECT
public:
  Transform(int argc, char** argv);
  virtual ~Transform();
  bool init();
  bool init(const std::string &master_url, const std::string &host_url);
  void shutdown() //for stop button
    {ros::shutdown();}
  //void setTransform();
  void posCallback(const std_msgs::Float64MultiArrayConstPtr &msg);
  void setTransform(double x, double y, double z, double r_x, double r_y,double r_z, double r_w);
    tf::Transform T_robot_to_camera;
protected:
  void run();
private:
  int init_argc;
  char** init_argv;
  tf::Transform T_camera;

  double width;
  ros::Publisher transform_publisher;
  ros::Subscriber transform_subscriber;



};



}




#endif // TRANSFORM_H
