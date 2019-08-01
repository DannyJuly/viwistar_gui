# Install script for directory: /home/dian/git/viwistar_gui/src/robot_config/fanuc_m16ib_support

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/dian/git/viwistar_gui/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/dian/git/viwistar_gui/build/robot_config/fanuc_m16ib_support/catkin_generated/installspace/fanuc_m16ib_support.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fanuc_m16ib_support/cmake" TYPE FILE FILES
    "/home/dian/git/viwistar_gui/build/robot_config/fanuc_m16ib_support/catkin_generated/installspace/fanuc_m16ib_supportConfig.cmake"
    "/home/dian/git/viwistar_gui/build/robot_config/fanuc_m16ib_support/catkin_generated/installspace/fanuc_m16ib_supportConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fanuc_m16ib_support" TYPE FILE FILES "/home/dian/git/viwistar_gui/src/robot_config/fanuc_m16ib_support/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fanuc_m16ib_support" TYPE DIRECTORY FILES
    "/home/dian/git/viwistar_gui/src/robot_config/fanuc_m16ib_support/config"
    "/home/dian/git/viwistar_gui/src/robot_config/fanuc_m16ib_support/launch"
    "/home/dian/git/viwistar_gui/src/robot_config/fanuc_m16ib_support/meshes"
    "/home/dian/git/viwistar_gui/src/robot_config/fanuc_m16ib_support/urdf"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fanuc_m16ib_support" TYPE FILE FILES "/home/dian/git/viwistar_gui/src/robot_config/fanuc_m16ib_support/readme.md")
endif()

