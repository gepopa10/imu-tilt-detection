# IMU Tilt Detection ROS2 Package

This ROS2 package, **tilt_detection**, uses an IMU accelerometer to detect tilt and inversion of a robot during autonomous operation.

![Input data Image](./media/raw_accelerometer_data.png)

## Input & Output

- **Input:** `/imu/data_raw` : `sensor_msgs/Imu` (IMU accelerometer data)
- **Output:** 
    - `/tilt/status` : `tilt_detection/TiltStatus` (Tilt status, `True` > 15° tilt, `False` otherwise)

## Explanations

**TiltPublisher** node that subscribes to `/imu/data_raw`, uses TiltDetector and published the computed status on `/tilt/status` at the same frequency.

**TiltDetector** computes the tilt given accelerations.
Functions:
- compute_roll_deg_from_acceleration(double x, double y, double z) -> double
- compute_pitch_deg_from_acceleration(double x, double y, double z) -> double
- compute_tilt_status_from_acceleration(double x, double y, double z) -> bool

## Development

Tested on ROS2 Iron (Ubuntu 22.04).

## Results

![Outpit data Image](./media/output.png)

With 100pts (1sec) smooth

![Outpit data Image](./media/output_smoothed.png)
