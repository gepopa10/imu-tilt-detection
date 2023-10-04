cmake_minimum_required(VERSION 3.8)
project(imu_tilt_detection)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(diagnostic_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
set(msg_files "msg/TiltStatus.msg")
rosidl_generate_interfaces(${PROJECT_NAME} ${msg_files} DEPENDENCIES sensor_msgs)
add_executable(tilt_publisher src/tilt_publisher.cpp src/tilt_detector.cpp)
ament_target_dependencies(tilt_publisher rclcpp std_msgs sensor_msgs diagnostic_msgs rosidl_default_runtime)
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(tilt_publisher "${cpp_typesupport_target}") 

target_include_directories(tilt_publisher PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  ament_add_gtest(${PROJECT_NAME}_tilt_detector_test test/tilt_detector_test.cpp src/tilt_detector.cpp)
  target_include_directories(${PROJECT_NAME}_tilt_detector_test PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  )
  ament_target_dependencies(${PROJECT_NAME}_tilt_detector_test
    std_msgs
  )
endif()

install(TARGETS
  tilt_publisher
  DESTINATION lib/${PROJECT_NAME})
  
ament_package()
