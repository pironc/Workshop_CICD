# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.0)

# Name of the project
project(HelloWorld)

# Add all the source files needed to build the executable
add_executable(HelloWorld sources/main.cpp sources/HelloWorld.cpp)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(tests_run tests/tests.cpp sources/HelloWorld.cpp)
target_link_libraries(tests_run ${GTEST_LIBRARIES} pthread)