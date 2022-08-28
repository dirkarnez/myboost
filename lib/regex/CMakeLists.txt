cmake_minimum_required(VERSION 3.14)
project(regex)

add_library(${PROJECT_NAME} STATIC
    "include/regex.h"
    "src/regex.cpp")
    
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")