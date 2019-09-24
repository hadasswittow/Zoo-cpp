cmake_minimum_required(VERSION 3.14)
project(zoo)

set(CMAKE_CXX_STANDARD 98)

add_executable(zoo main.cpp Animal.h Mammals.h SeaCreatures.h Bird.h tests.cpp tests.h Zoo.h Lion.cpp Lion.h Monkey.cpp Monkey.h Shark.cpp Shark.h Clownfish.h Dog.cpp Dog.h SnowyOwl.cpp SnowyOwl.h Goose.cpp Goose.h Whale.cpp Whale.h)