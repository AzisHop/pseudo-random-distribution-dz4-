cmake_minimum_required(VERSION 3.17)
project(dz4)

set(CMAKE_CXX_STANDARD 17)

include_directories(./include)


set( SRC
       src/TextHandler.cpp)

add_executable(dz4 main.cpp ${SRC})
