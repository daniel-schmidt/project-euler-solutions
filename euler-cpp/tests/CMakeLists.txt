cmake_minimum_required(VERSION 3.22.0)
project(tests VERSION 0.2.0 LANGUAGES CXX)

add_executable(tests prob_2_tests.cpp)

target_link_libraries(tests PUBLIC solutions)