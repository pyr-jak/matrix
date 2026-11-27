cmake_minimum_required(VERSION 4.1)
project(matrix)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(matrix
        matrix.cpp
        main.cpp)
