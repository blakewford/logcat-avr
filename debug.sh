#!/bin/bash

#Expects "/proc/18088/fd/0"
for i in `seq 1 5000`;
do
    echo si > $1
done
