cmake_minimum_required(VERSION 3.14)
project(zoo)

set(CMAKE_CXX_STANDARD 98)

add_executable(zoo main.cpp Animal.cpp Animal.h Mammals.h SeaCreatures.h Bird.h tests.cpp tests.h Zoo.h)