cmake_minimum_required(VERSION 2.8.3)
project(vehicle_io_driver)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

find_package(Eigen3 REQUIRED)
if(NOT EIGEN3_INCLUDE_DIRS)
  set(EIGEN3_INCLUDE_DIRS "${EIGEN3_INCLUDE_DIR};/usr/include/eigen3/Eigen/Eigen")
endif()

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
#  vehicle_input_msg
#  vehicle_output_msg
)

catkin_package(
  CATKIN_DEPENDS roscpp rospy std_msgs
)

include_directories(SYSTEM ${Boost_INCLUDE_DIR} ${EIGEN3_INCLUDE_DIRS})
link_directories(${catkin_LIBRARY_DIRS})

include_directories(
  ./include/laser_io
  ${catkin_INCLUDE_DIRS}
)
add_executable(vehicle_io_driver src/vehicle_io_driver.cpp)
target_link_libraries(vehicle_io_driver ${catkin_LIBRARIES} ${Boost_LIBRARIES})
target_link_libraries(vehicle_io_driver ./include/laser_io/libcontrolcan.so pthread)




