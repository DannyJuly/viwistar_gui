cmake_minimum_required(VERSION 2.8.3)
project(pick_place)

add_compile_options(-std=c++11)

find_package(Eigen3 REQUIRED)

# Eigen 3.2 (Wily) only provides EIGEN3_INCLUDE_DIR, not EIGEN3_INCLUDE_DIRS
if(NOT EIGEN3_INCLUDE_DIRS)
  set(EIGEN3_INCLUDE_DIRS ${EIGEN3_INCLUDE_DIR})
endif()

find_package(catkin REQUIRED
  COMPONENTS
    #interactive_markers
    moveit_core
    moveit_visual_tools
    moveit_ros_planning
    moveit_ros_planning_interface
    pluginlib
    geometric_shapes
    #pcl_ros
    #pcl_conversions
    rosbag
    tf2_ros
    tf2_eigen
    tf2_geometry_msgs
	message_generation
	std_msgs
	roscpp
	geometry_msgs
	rospy
)

find_package(Boost REQUIRED system filesystem date_time thread)

add_service_files(FILES SrvTransform.srv)
generate_messages(DEPENDENCIES geometry_msgs)

catkin_package(
 # LIBRARIES
   # interactivity_utils
  #INCLUDE_DIRS
  CATKIN_DEPENDS
    moveit_core
    moveit_visual_tools
    moveit_ros_planning_interface
   #interactive_markers
	geometry_msgs
	roscpp
	rospy
	std_msgs
	message_runtime
  DEPENDS
    EIGEN3
)

include_directories(SYSTEM ${Boost_INCLUDE_DIR} ${EIGEN3_INCLUDE_DIRS})
include_directories(${catkin_INCLUDE_DIRS})
link_directories(${catkin_LIBRARY_DIRS})

add_executable(panda_pick_place src/panda_pick_place.cpp)
add_dependencies(panda_pick_place ${${PROJECT_NAME}_EXPORTED_TARGETS})
target_link_libraries(panda_pick_place ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS panda_pick_place DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})






