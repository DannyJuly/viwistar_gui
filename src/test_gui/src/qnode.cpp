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
    wait();
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
            transformStamped = tfBuffer.lookupTransform("panda_hand", "world",
                                     ros::Time(0));
          }
         catch (tf2::TransformException &ex) {
            ROS_WARN("%s",ex.what());
            ros::Duration(1.0).sleep();
            continue;
          }

      Q_EMIT realtimeposition();
     // origin_target_pub.publish(position_srv);
//      if(flag_publish_once){

//          flag_publish_once = false;
//        }


     // std_msgs::String msg;
     // std::stringstream ss;
     // ss << "hello world -- " << count; //ss is an address
      //msg.data = ss.str(); // will be string
     // chatter_publisher.publish(msg);
      //ROS_INFO("send msg = %d", msg.data);
     // log(Info,std::string("I sent: ")+msg.data);

        ros::spinOnce();
        loop_rate.sleep();
        //initDur.sleep();
       // ++count;
    }
    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    terminate();
    wait();
    //Q_EMIT rosShutdown(); // emit 避免冲突，调用这个信号connect时所关联的槽函数
                        //used to signal the gui for a shutdown (useful to roslaunch)
}

//bool QNode::init()
//{
//    ros::init(init_argc,init_argv,"test_gui");
//    if (!ros::master::check()) //check whether the master is up
//    {
//        return false;
//    }
//    ros::start(); // explicitly needed since our nodehandle is going out of scope.
//    ros::NodeHandle n;
//    ros::NodeHandle nSub;
//    // Add your ros communications here.
//    chatter_publisher = n.advertise<std_msgs::String>("testgui_chat", 1000);
//    chatter_subscriber = nSub.subscribe("testgui_chat", 100, &QNode::RecvTopicCallback, this);
//    //ros::spin();
//    start(); //QThread::start -> run()
//    return true;
//}

//bool QNode::init(const std::string &master_url, const std::string &host_url)
//{
//    std::map<std::string,std::string> remappings;
//    remappings["__master"] = master_url; //let __master = master_url
//    remappings["__hostname"] = host_url;//__master:=http://foo:11311' or './my_node __master:=http://foo:11311' using the remapping arguments you foun
//    ros::init(remappings,"test_gui"); //remappings is pointer array
//    if (!ros::master::check())
//    {
//        return false;
//    }
//    ros::start(); // explicitly needed since our nodehandle is going out of scope.
//    ros::NodeHandle n;
//    ros::NodeHandle nSub;
//    // Add your ros communications here.
//    chatter_publisher = n.advertise<std_msgs::String>("testgui_chat", 1000);
//    chatter_subscriber = nSub.subscribe("testgui_chat", 100, &QNode::RecvTopicCallback, this);
//    start();
//    return true;
//}

//void QNode::RecvTopicCallback(const std_msgs::StringConstPtr &msg)
//{
//    log_listen(Info, std::string("I heard: ")+msg->data.c_str());
//    //c_str()返回一个带有\0的指向正规string指针常量(为了与c语言兼容）data()不保证有没有null-terminate
//}

//void QNode::run()   //from QThread, after start()
//{
//    //ros::Rate loop_rate(1);
//    ros::Duration initDur(2);
//    int count = 0;
//    while (ros::ok())
//    {
//        std_msgs::String msg;
//        std::stringstream ss;
//        ss << "hello world -- " << count; //ss is an address
//        msg.data = ss.str(); // will be string
//        chatter_publisher.publish(msg);
//        //ROS_INFO("send msg = %d", msg.data);
//        log(Info,std::string("I sent: ")+msg.data);
//        ros::spinOnce();
//       // loop_rate.sleep();
//        initDur.sleep();
//        ++count;
//    }
//    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
//    //wait();
//    //Q_EMIT rosShutdown(); // emit 避免冲突，调用这个信号connect时所关联的槽函数
//                        //used to signal the gui for a shutdown (useful to roslaunch)
//}


void QNode::set_origin(double x, double y, double z,double r_x,double r_y,double r_z,double r_w)
{
    position_srv.request.origin.translation.x = x;
    position_srv.request.origin.translation.y = y;
    position_srv.request.origin.translation.z = z;
    position_srv.request.origin.rotation.x = r_x;
    position_srv.request.origin.rotation.y = r_y;
    position_srv.request.origin.rotation.z = r_z;
    position_srv.request.origin.rotation.w = r_w;
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

//void QNode::log(const LogLevel &level, const std::string &msg)
//{
//    logging_model.insertRows(logging_model.rowCount(),1);//insert only 1 data
//    std::stringstream logging_model_msg;
//    switch (level)
//    {
//        case(Debug):
//        {
//            ROS_DEBUG_STREAM(msg);
//            logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//        case(Info):
//        {
//            ROS_INFO_STREAM(msg);
//            logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//        case(Warn):
//        {
//            ROS_WARN_STREAM(msg);
//            logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//        case(Error):
//        {
//            ROS_ERROR_STREAM(msg);
//            logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//        case(Fatal):
//        {
//            ROS_FATAL_STREAM(msg);
//            logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//    }
//    QVariant new_row(QString(logging_model_msg.str().c_str()));//.str()提取成string
//    logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
//    Q_EMIT loggingUpdated(); // used to readjust the scrollbar
//}

//void QNode::log_listen(const LogLevel &level, const std::string &msg)
//{
//    logging_listen.insertRows(logging_listen.rowCount(),1);
//    std::stringstream logging_model_msg;
//    switch (level)
//    {
//        case(Debug):
//        {
//            ROS_DEBUG_STREAM(msg);
//            logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//        case(Info):
//        {
//            ROS_INFO_STREAM(msg);
//            logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//        case(Warn):
//        {
//            ROS_WARN_STREAM(msg);
//            logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//        case(Error):
//        {
//            ROS_ERROR_STREAM(msg);
//            logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//        case(Fatal):
//        {
//            ROS_FATAL_STREAM(msg);
//            logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
//            break;
//        }
//    }
//    QVariant new_row(QString(logging_model_msg.str().c_str()));
//    logging_listen.setData(logging_listen.index(logging_listen.rowCount()-1),new_row);
//    Q_EMIT loggingListen(); // used to readjust the scrollbar
//}

}  // namespace test_gui
