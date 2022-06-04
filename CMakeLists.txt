cmake_minimum_required(VERSION 3.21)
project(str CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} example.cpp str.h str_impl.h str.cpp)