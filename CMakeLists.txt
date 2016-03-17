PROJECT(sort) 

cmake_minimum_required(VERSION 3.0)  

SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall -O2") 
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -O2")  

message(info, "SDIR:${PROJECT_SOURCE_DIR}")
message(info, "BDIR:${PROJECT_BINARY_DIR}")

add_subdirectory(src) 

