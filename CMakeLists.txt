cmake_minimum_required(VERSION 3.17)
project(c_oop_test C)

set(CMAKE_C_STANDARD 11)

add_executable(c_oop_test main.c person.c person.h helper.c helper.h)