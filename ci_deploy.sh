#!/usr/bin/env bash

set -x
set -e

if [ "$TRAVIS_TAG" != "" ]; then
    if [ "$BUILD_TYPE" == "android" ]; then
        export CZMQ_DEPLOYMENT=builds/android/prefix/arm-linux-androideabi-4.9/lib/libczmq.a
    else
        export CZMQ_DEPLOYMENT="README.md, README.txt"
    fi
fi
export
