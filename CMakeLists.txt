cmake_minimum_required(VERSION 3.14)

# Project name and version
project(OpenMPMC VERSION 1.0
	          DESCRIPTION "Calculation of Pi using MC"
		  LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Add the executable
add_executable(ompmcpi src/main.cpp)

# Find MPI
find_package(MPI REQUIRED)
target_link_libraries(ompmcpi PUBLIC OpenMP::OpenMP_CXX)

