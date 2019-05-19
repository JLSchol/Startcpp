# contains 3 folders and CMakeLists.txt:
src, build and include

# CMakeLists.txt
	cmake_minimum_required(VERSION 2.8)
	project(my_project)
	include_directories( include/ )
	add_executable(executable src/hello_world.cpp)

# src:
The source folder contains the source files of the project
HelloWorld.cpp

# include:
has the header files


# build:
contains the files used to build the project

Build a fast simple/single file and create a executable
two lines, to specify compiler options e.g. optimizations
	g++ -c HelloWorld.cpp 
	g++ HelloWorld.o -o executable
one line
	g++ HelloWorld.cpp -o executable

Proper way with build folder and CMakeLists.txt
	cd build/
	cmake ..
	make
# or use the bash script to create the executable
	./createExe

# Run the executable named executable
	./build/executable