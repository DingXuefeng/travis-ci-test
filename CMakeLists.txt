cmake_minimum_required(VERSION 3.1)
project(directory_test)

find_package(GTest REQUIRED)

include_directories(${CMAKE_SOURCE_DIR})
message(status "${CMAKE_SOURCE_DIR}")
add_library(lib lib.cc)

add_executable(main main.cc)
target_link_libraries(main lib)
target_compile_features(main PUBLIC cxx_std_11)

add_executable(test test.cc)
target_link_libraries(test lib GTest::GTest GTest::Main)
target_compile_features(test PUBLIC cxx_std_11)
