cmake_minimum_required(VERSION 3.10)
project(RoboticsJourneyCPP)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(math_demo src/main.cpp src/math_utils.cpp)
add_executable(vector_ops src/vector_ops.cpp)
