cmake_minimum_required(VERSION 3.10) # Minimum required CMake version
project(MainPrj) # Define project name
set(CMAKE_CXX_STANDARD 17) # Set C++ standard to C++17
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(exam1 ejemplo1.cpp) # Define executable
add_executable(exam2 ejemplo2.cpp) # Define executable
add_subdirectory(ejemplo5) # Add subdirectory
add_subdirectory(Ejemplo4) # Add subdirectory
add_subdirectory(Ejemplo3) # Add subdirectory

