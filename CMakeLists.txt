cmake_minimum_required(VERSION 3.10)
project(tema1)
set(CMAKE_CXX_STANDARD 17)

include_directories(inc)

add_executable(tema1 src/main.cpp src/Carte.cpp)