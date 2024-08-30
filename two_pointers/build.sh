#!/bin/bash

file="$1"

g++ $file -Wall -std=c++17 -o ${file%.*} 
./${file%.*}

rm -r ${file%.*}