#!/usr/bin/env bash

set -x
set -e

if [ "$BUILD_TYPE" == "default" ]; then
    export CZMQ_DEPLOYMENT=README.*
elif [ "$BUILD_TYPE" == "android" ]; then
    export CZMQ_DEPLOYMENT=builds/android/prefix/arm-linux-androideabi-4.9/lib/libczmq.a
else
    export CZMQ_DEPLOYMENT=""
fi
