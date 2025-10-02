
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(EjemploClases)

include_directories(include)

# Add the executable for CubeUnified.cpp
add_executable(complex_exe clases.cpp)

# Add the executable for Complex with separated files
add_executable(complex_separated_exe src/main.cpp src/Complex.cpp src/Vehicle.cpp)

