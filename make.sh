#!/bin/sh

set -e

CXX=g++
CXXFLAGS="-O2"
LDFLAGS=

${CXX} ${CXXFLAGS} -c main.cc  -o main.o
${CXX} ${CXXFLAGS} -c foo_t.cc -o foo_t.o
${CXX} ${CXXFLAGS} ${LDFLAGS} main.o foo_t.o -o main
