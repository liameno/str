cmake_minimum_required(VERSION 3.21)
project(str CXX)

set(CMAKE_CXX_STANDARD 03)

add_executable(${PROJECT_NAME} example.cpp str.h)