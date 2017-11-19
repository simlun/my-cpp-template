cmake_minimum_required(VERSION 3.8)
project(foo)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(foolib)
add_subdirectory(fooapp)
add_subdirectory(footests)