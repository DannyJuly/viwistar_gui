cmake_minimum_required(VERSION 2.8.3)
project(tcp_ip)

find_package(catkin REQUIRED COMPONENTS 
  std_msgs 
  roscpp
  cv_bridge
  image_transport
  sensor_msgs
  )


catkin_package(
  LIBRARIES ros_tutorials_topic
  CATKIN_DEPENDS std_msgs roscpp
)

include_directories(${catkin_INCLUDE_DIRS})


add_executable(ethernet_socket src/ethernet_socket.cpp)
add_dependencies(ethernet_socket ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(ethernet_socket ${catkin_LIBRARIES})
