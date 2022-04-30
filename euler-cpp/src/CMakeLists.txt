add_library(solutions prob_1.cpp)

target_include_directories(solutions PUBLIC ../include)

target_compile_features(solutions PUBLIC cxx_std_20)
set_target_properties(solutions PROPERTIES CXX_EXTENSIONS OFF)