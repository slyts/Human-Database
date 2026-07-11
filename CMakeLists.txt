cmake_minimum_required(VERSION 3.21)
project(Human-Base VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME})

add_subdirectory(src)
add_subdirectory(src/utils)
add_subdirectory(src/managers)
add_subdirectory(src/person)