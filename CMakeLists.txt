cmake_minimum_required(VERSION 3.10)

# Project name
project(MyProgram VERSION 1.0)

# Set output directory for executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

# Add main executable
add_executable(MyProgram src/main.cpp)

# Add nlohmann_json library
#include(FetchContent)
#FetchContent_Declare(
#  nlohmann_json
#  GIT_REPOSITORY https://github.com/nlohmann/json.git
#  GIT_TAG v3.11.3
#)
#FetchContent_MakeAvailable(nlohmann_json)

#include(FetchContent)
#FetchContent_Declare(
#  raylib
#  GIT_REPOSITORY https://github.com/raysan5/raylib.git
#  GIT_TAG v5.0
#)

# Link nlohmann_json to the executable
#target_link_libraries(MyProgram PRIVATE nlohmann_json::nlohmann_json raylib)
