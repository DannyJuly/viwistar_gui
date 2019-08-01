# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "test_gui: 0 messages, 1 services")

set(MSG_I_FLAGS "-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(test_gui_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv" NAME_WE)
add_custom_target(_test_gui_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "test_gui" "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv" "geometry_msgs/Quaternion:geometry_msgs/Transform:geometry_msgs/Vector3"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(test_gui
  "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/test_gui
)

### Generating Module File
_generate_module_cpp(test_gui
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/test_gui
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(test_gui_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(test_gui_generate_messages test_gui_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv" NAME_WE)
add_dependencies(test_gui_generate_messages_cpp _test_gui_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(test_gui_gencpp)
add_dependencies(test_gui_gencpp test_gui_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS test_gui_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(test_gui
  "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/test_gui
)

### Generating Module File
_generate_module_eus(test_gui
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/test_gui
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(test_gui_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(test_gui_generate_messages test_gui_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv" NAME_WE)
add_dependencies(test_gui_generate_messages_eus _test_gui_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(test_gui_geneus)
add_dependencies(test_gui_geneus test_gui_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS test_gui_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(test_gui
  "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/test_gui
)

### Generating Module File
_generate_module_lisp(test_gui
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/test_gui
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(test_gui_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(test_gui_generate_messages test_gui_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv" NAME_WE)
add_dependencies(test_gui_generate_messages_lisp _test_gui_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(test_gui_genlisp)
add_dependencies(test_gui_genlisp test_gui_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS test_gui_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(test_gui
  "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/test_gui
)

### Generating Module File
_generate_module_nodejs(test_gui
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/test_gui
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(test_gui_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(test_gui_generate_messages test_gui_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv" NAME_WE)
add_dependencies(test_gui_generate_messages_nodejs _test_gui_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(test_gui_gennodejs)
add_dependencies(test_gui_gennodejs test_gui_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS test_gui_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(test_gui
  "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/test_gui
)

### Generating Module File
_generate_module_py(test_gui
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/test_gui
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(test_gui_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(test_gui_generate_messages test_gui_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/test_gui/srv/SrvTransform.srv" NAME_WE)
add_dependencies(test_gui_generate_messages_py _test_gui_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(test_gui_genpy)
add_dependencies(test_gui_genpy test_gui_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS test_gui_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/test_gui)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/test_gui
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(test_gui_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/test_gui)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/test_gui
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(test_gui_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/test_gui)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/test_gui
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(test_gui_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/test_gui)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/test_gui
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(test_gui_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/test_gui)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/test_gui\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/test_gui
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(test_gui_generate_messages_py geometry_msgs_generate_messages_py)
endif()
