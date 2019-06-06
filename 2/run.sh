#!/bin/bash
docker run -ti --rm -v "$PWD/../1/linux":/home/student/src/linux -v "$PWD/initramfs":/home/student/src/initramfs so
