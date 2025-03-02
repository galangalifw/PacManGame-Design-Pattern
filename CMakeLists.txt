cmake_minimum_required(VERSION 3.10)
project(PacManGame)

set(CMAKE_CXX_STANDARD 11)

# Include header files from the include directory
include_directories(include)

# Add the executable using the main source file
add_executable(PacManGame src/main.cpp)
