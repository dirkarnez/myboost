cmake_minimum_required(VERSION 3.14)
project(math)

add_library(${PROJECT_NAME} STATIC
    "include/calculus.h"
    "src/calculus.cpp")
    
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")