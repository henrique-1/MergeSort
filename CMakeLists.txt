cmake_minimum_required(VERSION 3.24)
project(Merge_Sort C)

set(CMAKE_C_STANDARD 11)

add_executable(Merge_Sort main.c intercalaSentinela.c intercalaSentinela.h intercala.c intercala.h mergeSort.c mergeSort.h)
