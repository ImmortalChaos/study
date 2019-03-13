#!/bin/bash

if [ -z "$1" ]; then
   echo "Usage : "
   echo "    build.sh [source file path]"
   echo "Ex)"
   echo "    build.sh ../src/sample.cpp"
   exit 1
fi

if [ -f "$1" ] 
then
   echo "Compile : $1"
else
   echo "$1 not found."
   exit 1
fi

# Extract Filename
filename=$(basename $1)
fname="${filename%.*}"

if [ -f "${fname}_exe" ]
then
    rm ${fname}_exe
fi

g++ -c $1
g++ -o ${fname}_exe $fname.o
rm $fname.o


if [ -f "${fname}_exe" ]
then
	echo "execute file"
	echo "---------------------------------------------------------"
	./${fname}_exe
	echo "Done."
	echo "---------------------------------------------------------"
else
	echo "Fail Compile"
fi

