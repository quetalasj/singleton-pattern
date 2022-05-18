cmake_minimum_required(VERSION 3.22)
project(singleton_pattern)

set(CMAKE_CXX_STANDARD 20)
include_directories(include)

add_executable(singleton_pattern main.cpp ./src/Singleton.cpp)
