cmake_minimum_required(VERSION 3.5.1)
project(Toy)

SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11")

# boost environment finder
find_package(Boost REQUIRED regex filesystem)
MESSAGE(${Boost_FOUND})

# qt5 environment finder
find_package()
