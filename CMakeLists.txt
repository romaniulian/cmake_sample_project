#defining the version of CMake to be used
#modern CMake projects use at least version 3.0.0
cmake_minimum_required(VERSION 3.13)

#defining the name of the project and the programming language(CXX -> C++)
project(IPC_Example1 CXX)

#adding a subdirectory
#IMPORTANT: the subdirectories  added should also contain in them a CMakeLists.txt file
add_subdirectory(src)