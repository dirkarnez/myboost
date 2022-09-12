cmake_minimum_required(VERSION 3.14)
project(finance)

add_library(${PROJECT_NAME} STATIC
    "include/finance.h"
    "src/finance.cpp")
    
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")