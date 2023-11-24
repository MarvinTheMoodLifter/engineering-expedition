cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)
project(Book)

include_directories(include)

add_library(${PROJECT_NAME} SHARED
  src/Book.cpp 
  src/BookShelf.cpp
  src/Date.cpp)

add_executable(main src/main.cpp)

target_link_libraries(main ${PROJECT_NAME})
