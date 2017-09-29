#!/bin/bash

#Expects "/proc/18088/fd/0"
for i in `seq 1 5000`;
do
    echo s > $1
done
