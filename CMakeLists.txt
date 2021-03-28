cmake_minimum_required(VERSION 3.17)
project(networking)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_EXE
        src/network.cpp
        main.cpp)

set(HEADERS_EXE
        network.h)

add_executable(networking ${SOURCE_EXE})