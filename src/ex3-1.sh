#!/bin/sh

if [ -z "$1" ] ; then

    while true
    do
        echo "hello world"
    done
else

    n=$1
    for i in $(seq 1 $n)
    do
        echo "hello world"
    done
fi

exit 0


