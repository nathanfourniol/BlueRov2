#!/bin/bash


path=$( find /home -iname "ROS_bluerov2_ws" ) 
source $path/devel/setup.bash
cd $path

if [ "$1" = "-s" ] || [ "$1" = "s" ] || [ "$1" = "sim" ]
then
	echo 'ROS SIMULATION'
	roscore &
	roslaunch bluerov_ros_playground bluerov2_node.launch bluerov_node_device:=udp:localhost:14550
elif [ "$1" = "robot" ] || [ "$1" = "-r" ] || [ "$1" = "r" ]
then 
	echo 'ROS ROBOT'	
	roscore &
	roslaunch bluerov_ros_playground bluerov2_node.launch 
else
	echo -e "Lancer ROS pour : -s la simulation\n                  -r pour le robot"
fi
