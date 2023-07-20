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
find_package(rosidl_default_generators REQUIRED)
set(msg_files "msg/TiltStatus.msg")
rosidl_generate_interfaces(${PROJECT_NAME} ${msg_files} DEPENDENCIES sensor_msgs)
add_executable(tilt_publisher src/tilt_publisher.cpp)
ament_target_dependencies(tilt_publisher rclcpp std_msgs sensor_msgs rosidl_default_runtime)
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(tilt_publisher "${cpp_typesupport_target}") 

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(TARGETS
  tilt_publisher
  DESTINATION lib/${PROJECT_NAME})
  
ament_package()
