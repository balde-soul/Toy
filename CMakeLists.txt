cmake_minimum_required(VERSION 3.5.1)
project(Toy)

SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11")

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/external ${CMAKE_MODULE_PATH})

include(ProjectBase)

add_subdirectory(core)