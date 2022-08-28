cmake_minimum_required(VERSION 3.14)
project(stringutils)

add_library(${PROJECT_NAME} STATIC
    "include/stringutils.h"
    "src/stringutils.cpp")
    
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")