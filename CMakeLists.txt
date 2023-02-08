cmake_minimum_required(VERSION 3.24)
project(C_)

set(CMAKE_CXX_STANDARD 17)

add_executable(C_HelloWorld HelloWorld.cpp)
add_executable(C_dist2points dist2points.cpp )
add_executable(C_seconds seconds.c)
add_executable(C_givechange givechange.cpp)