cmake_minimum_required(VERSION 3.21 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)
project(MyVector)

include_directories(include)

add_library(${PROJECT_NAME} SHARED
		src/MyVector.cpp)

add_executable(main src/main.cpp)

target_link_libraries(main ${PROJECT_NAME})
