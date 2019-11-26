# cmake_minimum_required(VERSION <specify CMake version here>)
project(CAlgorithms C)

set(CMAKE_C_STANDARD 99)

add_executable(CAlgorithms main.c main.h chapter2/SqList.h chapter2/Sqlist.c)

set(CMAKE_LEGACY_CYGWIN_WIN32 0)