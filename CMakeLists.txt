cmake_minimum_required(VERSION 3.10)
project(MyProgram)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the output directory for the executable to a 'bin' directory at the top level of the project
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Recursively find all source files in the src directory
file(GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Recursively find all header files in the include directory
file(GLOB_RECURSE HEADERS "${PROJECT_SOURCE_DIR}/include/*.h")

# Create the executable
add_executable(MyProgram ${SOURCES} ${HEADERS})

# Include the directory containing header files
target_include_directories(MyProgram PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Add compiler options
target_compile_options(MyProgram PRIVATE -Wall -Wextra -Wpedantic)

# Optional: Set the build type (uncomment the desired line)
# set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE Release)

# Optional: Link with external libraries (if needed)
# target_link_libraries(MyProgram PRIVATE some_library)

# Optional: Organize source files into groups
source_group(TREE ${CMAKE_SOURCE_DIR}/src PREFIX "Source Files" FILES ${SOURCES})
