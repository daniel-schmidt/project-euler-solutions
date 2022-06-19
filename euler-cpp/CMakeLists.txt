cmake_minimum_required(VERSION 3.22.0)
project(project-euler-cpp VERSION 0.2.0 LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(tests)

add_executable(project-euler-cpp main.cpp)

target_link_libraries(project-euler-cpp PUBLIC solutions)