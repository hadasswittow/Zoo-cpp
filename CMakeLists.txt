cmake_minimum_required(VERSION 3.14)
project(zoo)

set(CMAKE_CXX_STANDARD 98)

add_executable(zoo main.cpp Animal.h Mammals.h SeaCreatures.h Bird.h tests.cpp tests.h Zoo.h Lion.h Monkey.h Shark.h Clownfish.h Dog.h SnowyOwl.h Goose.h Whale.h)