cmake_minimum_required(VERSION 2.8)

project(mathic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")


add_subdirectory(include)
add_subdirectory(test)