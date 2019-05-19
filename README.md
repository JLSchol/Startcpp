# contains 3 folders:
# src, build and devel




# src:
# The source folder contains the source files of the project
# HelloWorld.cpp



# build:
# contains the files used to build the project

# Build a fast simple/single file and create a executable
# two lines, to specify compiler options e.g. optimizations
g++ -c HelloWorld.cpp 
g++ HelloWorld.o -o executable
# one line
g++ HelloWorld.cpp -o executable

# Proper way
cd build/
cmake ..
make



# Run the executable named executable
./executable
