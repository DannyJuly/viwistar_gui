/**
 * @file /include/test_gui/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2018
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/
#ifndef test_gui_QNODE_HPP_
#define test_gui_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/
#include <ros/ros.h>
#include "std_msgs/String.h"
#include <sensor_msgs/JointState.h>
#include <tf/transform_broadcaster.h>
#include <string>
#include <QThread>
#include <QStringListModel>
#include <QProcess>
#include <QWidget>
#include <tf2_ros/transform_listener.h>
#include <geometry_msgs/TransformStamped.h>
/*****************************************************************************
** Namespaces
*****************************************************************************/
namespace test_gui
{

/*****************************************************************************
** Class
*****************************************************************************/
class QNode : public QThread
{
    Q_OBJECT
public:
    QNode(int argc, char** argv);
    virtual ~QNode();
    bool init();
    bool init(const std::string &master_url, const std::string &host_url);
    void run();
    void shutdown() //for stop button
      {ros::shutdown();}
    void set_origin(double x, double y, double z,double r_x,double r_y,double r_z,double r_w);
    void set_target(double x, double y, double z,double r_x,double r_y,double r_z,double r_w);
    QProcess roscore;
    QProcess rviz;
    geometry_msgs::TransformStamped transformStamped;
    geometry_msgs::TransformStamped origin_position;
    geometry_msgs::TransformStamped target_position;
    QString tempStr;
    /*********************
    ** Logging
    **********************/
    enum LogLevel
    {
        Debug,
        Info,
        Warn,
        Error,
        Fatal
    };

    QStringListModel* loggingModel()
        {return &logging_model;}
    void log( const LogLevel &level, const std::string &msg);

    void RecvTopicCallback(const std_msgs::StringConstPtr &msg);
    QStringListModel* loggingModelLis()
        {return &logging_listen;}
    void log_listen(const LogLevel &level, const std::string &msg);

Q_SIGNALS:
    void loggingUpdated();
    void loggingListen();
    void rosShutdown();
    void realtimeposition();

private:
    int init_argc;
    char** init_argv;
    ros::Publisher chatter_publisher;
    ros::Subscriber chatter_subscriber;
    ros::ServiceClient origin_target_client;
    QStringListModel logging_model; //QStringListModel is an editable model to
                                    //display a number of strings in a view widget
    QStringListModel logging_listen;
};

}  // namespace test_gui

#endif /* test_gui_QNODE_HPP_ */
