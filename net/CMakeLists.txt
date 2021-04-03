cmake_minimum_required( VERSION 3.4.0 )

project(network CXX)

set(SOURCE_LIB
        src/Client/client.cpp
        src/Server/server.cpp
        src/network.cpp)

set(HEADER_LIB
        include/Client/client.h
        include/Server/server.h
        include/network.h)

add_library(${PROJECT_NAME} SHARED ${SOURCE_LIB} ${HEADER_LIB})
