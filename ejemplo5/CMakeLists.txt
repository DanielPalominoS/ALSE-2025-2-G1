cmake_minimum_required(VERSION 3.10) # Minimum required CMake version
project(Ejemplo5Arg) # Define project name

set(CMAKE_CXX_STANDARD 17) # Set C++ standard to C++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(arg_exe argumentos.cpp) # Define executable