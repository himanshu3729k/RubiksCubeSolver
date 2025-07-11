cmake_minimum_required(VERSION 3.31)
project(RubiksCubeSolver)

set(CMAKE_CXX_STANDARD 14)

add_executable(RubiksCubeSolver main.cpp
        GenericRubiksCube.cpp
        GenericRubiksCube.h
        3dRubiksCube.cpp
        1dRubiksCube.cpp
        BitBoardRubiksCube.cpp)
