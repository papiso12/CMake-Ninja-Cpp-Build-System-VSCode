cmake_minimum_required(VERSION 3.10)
project(PetSimulator)

set(CMAKE_CXX_STANDARD 17)

# Set the output directory for the executable to a 'bin' directory at the top level of the project
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Include the directory containing header files
include_directories(${PROJECT_SOURCE_DIR}/include)

# Find all source files in the src directory
file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# Create the executable
add_executable(PetSimulator ${SOURCES})

