cmake_minimum_required(VERSION 3.1)
project(directory_test)

find_package(GTest REQUIRED)

include_directories(${CMAKE_SOURCE_DIR})
message(status "${CMAKE_SOURCE_DIR}")
add_library(lib lib.cc)

add_executable(main main.cc)
target_link_libraries(main lib)
target_compile_features(main PUBLIC cxx_std_11)

add_executable(test1 test.cc)
target_link_libraries(test1 lib GTest::GTest GTest::Main)
target_compile_features(test1 PUBLIC cxx_std_11)
