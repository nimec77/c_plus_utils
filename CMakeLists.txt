cmake_minimum_required(VERSION 3.19)
project(utils)

set(CMAKE_CXX_STANDARD 20)

add_library(utils SHARED library.cpp library.h)
add_executable(utils_test library.cpp)