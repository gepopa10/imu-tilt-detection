#include <gtest/gtest.h>
#include "imu_tilt_detection/tilt_detector.h"

struct tilt_detector_tests : public testing::Test {
    const size_t nb_values_for_mean = 1;
    const int tilt_threshold_deg = 10;
    TiltDetector tilt_detector = TiltDetector(nb_values_for_mean, tilt_threshold_deg);
};

struct GIVEN_acc_y_0_and_z_0 : public tilt_detector_tests {
    const double acc_y = 0;
    const double acc_z = 0;
    const double acc_x = 10;
    const double expected_roll = 0;
    const double expected_pitch = 90;
};

TEST_F(GIVEN_acc_y_0_and_z_0, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_roll)
{
  double roll = tilt_detector.compute_roll_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(roll, expected_roll);
  double pitch = tilt_detector.compute_pitch_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(pitch, expected_pitch);
}

struct GIVEN_acc_x_10_and_z_10 : public tilt_detector_tests {
    const double acc_y = 0;
    const double acc_z = -10;
    const double acc_x = 10;
    const double expected_roll = 0;
    const double expected_pitch = 45;
};

TEST_F(GIVEN_acc_x_10_and_z_10, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_roll)
{
  double roll = tilt_detector.compute_roll_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(roll, expected_roll);
  double pitch = tilt_detector.compute_pitch_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(pitch, expected_pitch);
}

struct GIVEN_acc_y_10_and_z_10 : public tilt_detector_tests {
    const double acc_y = 10;
    const double acc_z = -10;
    const double acc_x = 0;
    const double expected_roll = 45;
    const double expected_pitch = 0;
};

TEST_F(GIVEN_acc_y_10_and_z_10, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_roll)
{
  double roll = tilt_detector.compute_roll_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(roll, expected_roll);
  double pitch = tilt_detector.compute_pitch_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(pitch, expected_pitch);
}

struct GIVEN_acc_x_0_and_z_0 : public tilt_detector_tests {
    const double acc_y = 10;
    const double acc_z = 0;
    const double acc_x = 0;
    const double expected_roll = 90;
    const double expected_pitch = 0;
};

TEST_F(GIVEN_acc_x_0_and_z_0, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_roll)
{
  double roll = tilt_detector.compute_roll_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(roll, expected_roll);
  double pitch = tilt_detector.compute_pitch_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(pitch, expected_pitch);
}

struct GIVEN_acc_x_10_and_y_10_and_z_10 : public tilt_detector_tests {
    const double acc_y = 1;
    const double acc_z = -10;
    const double acc_x = 1;
    const double expected_roll = 5.68244;
    const double expected_pitch = 5.68244;
    const double epsilon = 0.001;
};

TEST_F(GIVEN_acc_x_10_and_y_10_and_z_10, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_roll)
{
  double roll = tilt_detector.compute_roll_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_NEAR(roll, expected_roll, epsilon);
  double pitch = tilt_detector.compute_pitch_deg_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_NEAR(pitch, expected_pitch, epsilon);
}

struct GIVEN_roll_tilt_higher_than_threshold : public tilt_detector_tests {
    const double acc_x = 0;
    const double acc_z = -10;
    const double acc_y = 5;
    const bool expected_status = true;
};

TEST_F(GIVEN_roll_tilt_higher_than_threshold, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_tilt_status)
{
  bool status = tilt_detector.compute_tilt_status_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(status, expected_status);
}

struct GIVEN_pitch_tilt_higher_than_threshold : public tilt_detector_tests {
    const double acc_x = 5;
    const double acc_z = -10;
    const double acc_y = 0;
    const bool expected_status = true;
};

TEST_F(GIVEN_pitch_tilt_higher_than_threshold, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_tilt_status)
{
  bool status = tilt_detector.compute_tilt_status_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(status, expected_status);
}

struct GIVEN_tilt_lower_than_threshold : public tilt_detector_tests {
    const double acc_x = 1;
    const double acc_z = -10;
    const double acc_y = 0;
    const bool expected_status = false;
};

TEST_F(GIVEN_tilt_lower_than_threshold, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_tilt_status)
{
  bool status = tilt_detector.compute_tilt_status_from_acceleration(acc_x,acc_y,acc_z);
  ASSERT_EQ(status, expected_status);
}

struct GIVEN_mean_higher_than_threshold : public testing::Test {
    const bool expected_status = true;
    const size_t nb_values_for_mean = 3;
    const int tilt_threshold_deg = 10;
    TiltDetector tilt_detector = TiltDetector(nb_values_for_mean, tilt_threshold_deg);
};

TEST_F(GIVEN_mean_higher_than_threshold, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_tilt_status)
{
  (void)tilt_detector.compute_tilt_status_from_acceleration(5,0,-10);
  (void)tilt_detector.compute_tilt_status_from_acceleration(5,0,-10);
  (void)tilt_detector.compute_tilt_status_from_acceleration(5,0,-10);
  (void)tilt_detector.compute_tilt_status_from_acceleration(0,0,-10);
  bool status = tilt_detector.compute_tilt_status_from_acceleration(5,0,-10);
  ASSERT_EQ(status, expected_status);
}

struct GIVEN_mean_lower_than_threshold : public testing::Test {
    const bool expected_status = false;
    const size_t nb_values_for_mean = 3;
    const int tilt_threshold_deg = 10;
    TiltDetector tilt_detector = TiltDetector(nb_values_for_mean, tilt_threshold_deg);
};

TEST_F(GIVEN_mean_lower_than_threshold, WHEN_compute_tilt_status_from_acceleration_THEN_return_expected_tilt_status)
{
  (void)tilt_detector.compute_tilt_status_from_acceleration(5,0,-10);
  (void)tilt_detector.compute_tilt_status_from_acceleration(5,0,-10);
  (void)tilt_detector.compute_tilt_status_from_acceleration(5,0,-10);
  (void)tilt_detector.compute_tilt_status_from_acceleration(0,0,-10);
  bool status = tilt_detector.compute_tilt_status_from_acceleration(0,0,-10);
  ASSERT_EQ(status, expected_status);
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
