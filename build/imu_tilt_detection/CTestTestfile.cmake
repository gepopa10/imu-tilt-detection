# CMake generated Testfile for 
# Source directory: /home/gepopa/ros2_ws/src/imu_tilt_detection
# Build directory: /home/gepopa/ros2_ws/src/imu_tilt_detection/build/imu_tilt_detection
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(imu_tilt_detection_tilt_detector_test "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/gepopa/ros2_ws/src/imu_tilt_detection/build/imu_tilt_detection/test_results/imu_tilt_detection/imu_tilt_detection_tilt_detector_test.gtest.xml" "--package-name" "imu_tilt_detection" "--output-file" "/home/gepopa/ros2_ws/src/imu_tilt_detection/build/imu_tilt_detection/ament_cmake_gtest/imu_tilt_detection_tilt_detector_test.txt" "--command" "/home/gepopa/ros2_ws/src/imu_tilt_detection/build/imu_tilt_detection/imu_tilt_detection_tilt_detector_test" "--gtest_output=xml:/home/gepopa/ros2_ws/src/imu_tilt_detection/build/imu_tilt_detection/test_results/imu_tilt_detection/imu_tilt_detection_tilt_detector_test.gtest.xml")
set_tests_properties(imu_tilt_detection_tilt_detector_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/gepopa/ros2_ws/src/imu_tilt_detection/build/imu_tilt_detection/imu_tilt_detection_tilt_detector_test" TIMEOUT "60" WORKING_DIRECTORY "/home/gepopa/ros2_ws/src/imu_tilt_detection/build/imu_tilt_detection" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/gepopa/ros2_ws/src/imu_tilt_detection/CMakeLists.txt;28;ament_add_gtest;/home/gepopa/ros2_ws/src/imu_tilt_detection/CMakeLists.txt;0;")
subdirs("imu_tilt_detection__py")
subdirs("gtest")
