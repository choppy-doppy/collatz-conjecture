cmake_minimum_required(VERSION 3.26)
project(collatz_conjecture)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(collatz_conjecture
        main.cpp)
