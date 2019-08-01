# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "pick_place: 0 messages, 1 services")

set(MSG_I_FLAGS "-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(pick_place_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv" NAME_WE)
add_custom_target(_pick_place_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "pick_place" "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv" "geometry_msgs/Quaternion:geometry_msgs/Transform:geometry_msgs/Vector3"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(pick_place
  "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pick_place
)

### Generating Module File
_generate_module_cpp(pick_place
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pick_place
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(pick_place_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(pick_place_generate_messages pick_place_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv" NAME_WE)
add_dependencies(pick_place_generate_messages_cpp _pick_place_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pick_place_gencpp)
add_dependencies(pick_place_gencpp pick_place_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pick_place_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(pick_place
  "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/pick_place
)

### Generating Module File
_generate_module_eus(pick_place
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/pick_place
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(pick_place_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(pick_place_generate_messages pick_place_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv" NAME_WE)
add_dependencies(pick_place_generate_messages_eus _pick_place_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pick_place_geneus)
add_dependencies(pick_place_geneus pick_place_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pick_place_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(pick_place
  "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pick_place
)

### Generating Module File
_generate_module_lisp(pick_place
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pick_place
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(pick_place_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(pick_place_generate_messages pick_place_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv" NAME_WE)
add_dependencies(pick_place_generate_messages_lisp _pick_place_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pick_place_genlisp)
add_dependencies(pick_place_genlisp pick_place_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pick_place_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(pick_place
  "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/pick_place
)

### Generating Module File
_generate_module_nodejs(pick_place
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/pick_place
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(pick_place_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(pick_place_generate_messages pick_place_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv" NAME_WE)
add_dependencies(pick_place_generate_messages_nodejs _pick_place_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pick_place_gennodejs)
add_dependencies(pick_place_gennodejs pick_place_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pick_place_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(pick_place
  "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pick_place
)

### Generating Module File
_generate_module_py(pick_place
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pick_place
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(pick_place_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(pick_place_generate_messages pick_place_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/dian/git/viwistar_gui/src/pick_place/srv/SrvTransform.srv" NAME_WE)
add_dependencies(pick_place_generate_messages_py _pick_place_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pick_place_genpy)
add_dependencies(pick_place_genpy pick_place_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pick_place_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pick_place)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pick_place
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(pick_place_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/pick_place)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/pick_place
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(pick_place_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pick_place)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pick_place
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(pick_place_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/pick_place)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/pick_place
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(pick_place_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pick_place)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pick_place\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pick_place
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(pick_place_generate_messages_py geometry_msgs_generate_messages_py)
endif()
