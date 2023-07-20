from setuptools import find_packages
from setuptools import setup

setup(
    name='imu_tilt_detection',
    version='0.0.0',
    packages=find_packages(
        include=('imu_tilt_detection', 'imu_tilt_detection.*')),
)
