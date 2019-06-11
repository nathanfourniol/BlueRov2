#!/bin/bash

git clone https://github.com/freefloating-gazebo/freefloating_gazebo.git 
cd freefloating_gazebo
mkdir build
cd build
cmake ..
make -j4
sudo make install


