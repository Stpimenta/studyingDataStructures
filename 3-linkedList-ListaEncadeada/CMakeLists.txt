# Define o padrão mínimo do CMake
cmake_minimum_required(VERSION 3.10)
project(linkedlist)
set(CMAKE_CXX_STANDARD 17)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_executable(linkedlist ${SOURCES}
        ../4-recursion-sum-of-a-list/main.cpp)
target_include_directories(stack PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
