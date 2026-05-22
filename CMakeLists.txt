cmake_minimum_required(VERSION 4.2.0)
project(LeachF)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(include/leachf/dtypes)

set(SOURCES
    src/builtins.cpp
    include/leachf/dtypes/string.hpp
    include/leachf/dtypes/object.hpp)

add_executable(leachf ${SOURCES})
set_target_properties(leachf PROPERTIES CXX_SCAN_FOR_MODULES OFF)