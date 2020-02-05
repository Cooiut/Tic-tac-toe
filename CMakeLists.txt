cmake_minimum_required(VERSION 3.0)
project(Tic-tac-toe)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Tic-tac-toe
        Tic_tac_toe.cpp
        Tic_tac_toe.h
        control.cpp
        control.h
        prompt.cpp
        prompt.h
        main.cpp)
