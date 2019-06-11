#!/bin/bash

git clone https://github.com/ArduPilot/ardupilot
cd ardupilot
git submodule update --init --recursive
Tools/environment_install/install-prereqs-ubuntu.sh -y
. ~/.profile

