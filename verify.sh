#!/bin/sh

g++ quine.cpp -o quine.o
./quine.o > output
md5sum quine.cpp output > comparison.md5
md5sum comparison.md5 -c
rm output comparison.md5 quine.o
