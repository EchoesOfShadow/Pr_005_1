cmake_minimum_required(VERSION 4.0)
project(unitTest2)

set(CMAKE_CXX_STANDARD 20)


add_executable(unitTest2 main.cpp functions.h functions.cpp)


# Тести
add_subdirectory(tests)