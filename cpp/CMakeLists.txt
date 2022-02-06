cmake_minimum_required(VERSION 3.22.0)
project(project-euler-cpp VERSION 0.1.0)

add_executable(project-euler-cpp main.cpp)

target_compile_features(project-euler-cpp PUBLIC cxx_std_20)
set_target_properties(project-euler-cpp PROPERTIES CXX_EXTENSIONS OFF)