#!/bin/sh

g++ quine.cpp -o quine.o
./quine.o > output
md5sum quine.cpp output > comparison.md5
md5sum -c comparison.md5
