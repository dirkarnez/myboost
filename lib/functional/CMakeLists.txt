cmake_minimum_required(VERSION 3.14)
project("functional")

add_library(${PROJECT_NAME} STATIC
    "include/functional.h"
    "src/functional.cpp")
    
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")