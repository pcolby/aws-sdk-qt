#!/bin/bash

BUILDDIR=~/tmp/build/qdocs

rm -rf head
mkdir head
cp -a "$BUILDDIR-ext/html" head/api
cp -a "$BUILDDIR-int/html" head/internal
#cp -a "$BUILDDIR/release/unit-test-all-coverage/" head/coverage
