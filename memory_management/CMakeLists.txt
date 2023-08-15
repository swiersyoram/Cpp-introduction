cmake_minimum_required(VERSION 3.26)
project(memory_management)

set(CMAKE_CXX_STANDARD 17)

add_executable(memory_management main.cpp
        Resource.h
        Resource.cpp
        Person.h
        Person.cpp)
