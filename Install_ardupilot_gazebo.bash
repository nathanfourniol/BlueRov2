#!/bin/bash


sudo apt install git cmake build-essential
sudo apt install gazebo7 libgazebo7-dev
git clone https://github.com/patrickelectric/ardupilot_gazebo
cd ardupilot_gazebo
git checkout add_link
mkdir build
cd build
cmake ..
make -j4
sudo make install
echo 'source /usr/share/gazebo/setup.sh' >> ~/.bashrc
echo 'export GAZEBO_MODEL_PATH=~/ardupilot_gazebo/models' >> ~/.bashrc
echo 'export GAZEBO_RESOURCE_PATH=~/ardupilot_gazebo/worlds:${GAZEBO_RESOURCE_PATH}' >> ~/.bashrc
source ~/.bashrc
