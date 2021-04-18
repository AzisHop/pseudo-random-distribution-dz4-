cmake_minimum_required(VERSION 3.17)
project(dz4)

set(CMAKE_CXX_STANDARD 17)

include_directories(./include)

#add_compile_options("--coverage")
#add_link_options("--coverage")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set( SRC
        ./src/MD5Hash.cpp

        include/TextHandler.h src/TextHandler.cpp)

add_executable(dz4 main.cpp ${SRC})
add_subdirectory(test)

target_link_libraries(dz4 -lcryptopp)