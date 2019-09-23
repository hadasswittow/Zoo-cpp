cmake_minimum_required(VERSION 3.14)
project(zoo)

set(CMAKE_CXX_STANDARD 98)

add_executable(zoo main.cpp Animal.cpp Animal.h Mammals.cpp Mammals.h SeaCreatures.cpp SeaCreatures.h Bird.cpp Bird.h tests.cpp tests.h)