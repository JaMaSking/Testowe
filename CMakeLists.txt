cmake_minimum_required(VERSION 3.29)
project(lab7 C)

set(CMAKE_C_STANDARD 99)

add_executable(lab7 main.c
        bmp_io.h
        bmp_io.c)
