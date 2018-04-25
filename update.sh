#!/bin/bash

BUILDDIR=~/tmp/build/aws-sdk-qt-qmake-gcc-qt5101/doc

rm -rf head
mkdir head
cp -a "$BUILDDIR/html/api" head/api
cp -a "$BUILDDIR/html/int" head/internal
#cp -a "$BUILDDIR/release/unit-test-all-coverage/" head/coverage
