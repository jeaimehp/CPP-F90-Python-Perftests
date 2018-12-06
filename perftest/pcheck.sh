#! /usr/bin/bash

SECONDS=0
if [ $# -lt 2 ]
then
   echo "usage: pcheck.sh <application> <number of runs>"
   exit 0
fi

echo "Running $1 $2 times"

for i in `seq 1 $2`
do
  ./$1
done

duration=$SECONDS
echo "$(($duration / 60)) minutes and $(($duration % 60)) seconds elapsed."
