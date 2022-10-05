#!/bin/bash

wget -q -o /tmp/libdyanmic.so https://github.com/Mira-st/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdynamic.so
