cmake_minimum_required(VERSION 3.27)
project(Kolejka)

set(CMAKE_CXX_STANDARD 17)

add_executable(Kolejka main.cpp
        queue.cpp
        queue.h)
