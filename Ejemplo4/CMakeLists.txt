cmake_minimum_required(VERSION 3.10) # Minimum required CMake version
project(Ejemplo4FuncCB) # Define project name

set(CMAKE_CXX_STANDARD 17) # Set C++ standard to C++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(func_exe funciones.cpp) # Define executable
add_executable(cb_exe callbacks.cpp) # Define executable