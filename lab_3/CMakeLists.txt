cmake_minimum_required(VERSION 3.28)
project(lab_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab_3
        gun.h
        main.cpp
        name.h
        name_2.h
        person.h)
