add_executable(panda_pick_place src/panda_pick_place.cpp)
add_dependencies(panda_pick_place ${${PROJECT_NAME}_EXPORTED_TARGETS})
target_link_libraries(panda_pick_place ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS panda_pick_place DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
