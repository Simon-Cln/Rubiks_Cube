cmake_minimum_required(VERSION 3.23)
project(RUBIKS_CUBE C)

set(CMAKE_C_STANDARD 11)

add_executable(RUBIKS_CUBE main.c rubiks.c rubiks.h)
