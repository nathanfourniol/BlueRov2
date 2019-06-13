#!/bin/bash

cd ~/ardupilot/ArduSub
sim_vehicle.py -L RATBeach --out=udp:0.0.0.0:14550 --map --console

