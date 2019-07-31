#include<stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<string>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<iostream>
#include <sstream>
#include <std_msgs/Float64MultiArray.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "ros/ros.h"                          // ROS Default Header File
//#include "ros_tutorials_topic/MsgTutorial.h"  // MsgTutorial Message File Header. The header file is automatically created when building the package.
#define BUF_SIZE 8
#define PORT 8888 

using namespace std;

class Listener
{
public:
  Listener();
  float copy_data[8];
  int count;
public:
  void callback(const std_msgs::Float64MultiArrayConstPtr& msg);
  string getEightElement();
};
// %EndTag(CLASS_WITH_DECLARATION)%
Listener::Listener(){
  int i;
  for(i = 0; i < 8; i++)
  {
    this->copy_data[i]=0;
  }
  this->count=0;
}

void Listener::callback(const std_msgs::Float64MultiArrayConstPtr&  msg)
{
  int i;
  //ROS_INFO("I heard: [%d]", msg->data.at(0));
  //cv_bridge::CvImagePtr cv_ptr;
  //v_ptr = cv_bridge::toCvCopy(msg);
  //cout<<cv_ptr->image<<endl;
  for (i = 0; i < 8; i++){
    //copy_data[i]=cv_ptr->image.at<double>(0,i);
    copy_data[i]=msg->data.at(i);
    cout<<copy_data[i]<<endl;
    //out<<msg->data[i];
  }
  //cout <<"copy_data is: " << this->copy_data[i] <<endl;
  ++count;
}
string Listener::getEightElement(){
  int i=0;
  string str;
  for (i = 0;i < 8; i++){
		str.append(to_string(copy_data[i])+",");
	}
  return str;
}


// Message callback function. This is a function is called when a topic
// message named 'ros_tutorial_msg' is received. As an input message,
// the 'MsgTutorial' message of the 'ros_tutorials_topic' package is received.
// void msgCallback(const ros_tutorials_topic::MsgTutorial::ConstPtr& msg)
// {
//   cout<<"callback"<<endl;
//   ROS_INFO("recieve msg = %d", msg->height);   // Prints the 'stamp.sec' message
//   ROS_INFO("recieve msg = %d", msg->width);  // Prints the 'stamp.nsec' message
//   //ROS_INFO("recieve msg = %s", msg->encoding.c_str());        // Prints the 'data' message
//   //ROS_INFO("recieve msg = %d", msg->is_bigendian); 
//   //ROS_INFO("recieve msg = %d", msg->step); 
//   //ROS_INFO("recieve msg = %f", msg->data.at(0)); 
//   tcp(msg->data);
// }

int main(int argc, char **argv)                         // Node Main Function
{
  Listener listener;
  ros::init(argc, argv, "ethernet_node");            // Initializes Node Name

  ros::NodeHandle nh;                                   // Node handle declaration for communication with ROS system
  
  //initial tcp
  int server_fd, new_socket, valread; 
  struct sockaddr_in address; 
  int opt = 1; 
  int addrlen = sizeof(address); 
  char buffer[1024] = {0}; 
  int count=0;
  //char *hello = "Hello from server";
  
    // Creating socket file descriptor 
  if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
  { 
    perror("socket failed"); 
    exit(EXIT_FAILURE); 
  } 
       
  // Forcefully attaching socket to the port 8080 
  if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, 
                                                  &opt, sizeof(opt))) 
  { 
      perror("setsockopt"); 
      exit(EXIT_FAILURE); 
  } 
  address.sin_family = AF_INET; 
  address.sin_addr.s_addr = INADDR_ANY; 
  address.sin_port = htons( PORT ); 
       
    // Forcefully attaching socket to the port 8080 
  if (bind(server_fd, (struct sockaddr *)&address,  
                                 sizeof(address))<0) 
  { 
    perror("bind failed"); 
    exit(EXIT_FAILURE); 
  } 
  if (listen(server_fd, 3) < 0) 
  { 
    perror("listen"); 
    exit(EXIT_FAILURE); 
  } 
  if ((new_socket = accept(server_fd, (struct sockaddr *)&address,  
                       (socklen_t*)&addrlen))<0) 
  { 
    perror("accept"); 
    exit(EXIT_FAILURE); 
  } 

  cout<<"begin"<<endl;  
    // Declares subscriber. Create subscriber 'ros_tutorial_sub' using the 'MsgTutorial'
    // message file from the 'ros_tutorials_topic' package. The topic name is
    // 'ros_tutorial_msg' and the size of the publisher queue is set to 100.
  ros::Subscriber ros_tutorial_sub = nh.subscribe("pose_info", 100, &Listener::callback, &listener);
  ros::Rate loop_rate(3);
  while(ros::ok()){  
    cout<<"send"<<endl;
    if (count == 0){
      valread = read( new_socket, buffer, 1024); 
    }
    if (valread > 0){
        cout<<"buf from client: "<<buffer<<endl;
        count = 1;
        valread=0;
    }
      char * str_new = new char [listener.getEightElement().length()+1];
      std::strcpy (str_new, listener.getEightElement().c_str());
      //str_new = listener.getEightElement());
      //strcpy(str_new, listener.getEightElement());
	      //cout << data[0]<<endl;  
      cout<<"lis" <<listener.getEightElement()<<endl;
      cout<<"stnew"<<str_new<<endl; 
      send( new_socket,str_new , strlen(str_new) , 0 ); //sent message back to client 
      //} 
      //cout<<"whre seg?"<<endl;
      ros::spinOnce();
      loop_rate.sleep();
  }  
    // A function for calling a callback function, waiting for a message to be
    // received, and executing a callback function when it is received.
  

  return 0;
}
