cmake_minimum_required(VERSION 3.17)
project(cdemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(cdemo main.cpp helloworld.c demo/app_demo.c demo/demo.c demo/demo1.c demo/maxline.c demo/readfile.c demo/a.c demo/b.c demo/c.c demo/dateTrans.c)