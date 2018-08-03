cmake_minimum_required(VERSION 2.8.9)
project (hello)
set(CMAKE_BUILD_TYPE Debug)
add_executable(helloworld main.c othermsg.c)
