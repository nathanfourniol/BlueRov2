#!/bin/bash
git clone https://github.com/bluerobotics/freebuoyancy_gazebo
cd freebuoyancy_gazebo
mkdir build
cd build
cmake ..
make -j4
sudo make install


                  
