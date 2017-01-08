cmake_minimum_required(VERSION 3.6)
project(swiftCppTut)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES library.h Person.cpp Person.h Employee.cpp Employee.h Boss.cpp Boss.h)
add_library(swiftCppTut ${SOURCE_FILES})