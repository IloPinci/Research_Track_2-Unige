from setuptools import find_packages
from setuptools import setup

setup(
    name='bme_gazebo_sensors',
    version='1.0.0',
    packages=find_packages(
        include=('bme_gazebo_sensors', 'bme_gazebo_sensors.*')),
)
