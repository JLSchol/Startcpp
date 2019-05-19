# Declare the CMake API version for forward-compatibility
cmake_minimum_required(VERSION 2.8)

# create porject, collection of files that are somhow related
project(my_project)


# Define an executable target called ./executable
add_executable(executable src/HelloWorld.cpp)
