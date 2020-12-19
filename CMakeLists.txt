cmake_minimum_required(VERSION 3.17)
project(cdemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(cdemo main.cpp helloworld.c demo/app_demo.c)