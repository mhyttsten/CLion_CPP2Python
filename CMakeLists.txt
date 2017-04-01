cmake_minimum_required(VERSION 3.6)
project(CallCPPFromPython)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES CallCPPFromPython/library.cpp CallCPPFromPython/library.h CallCPPFromPython/TestingSO_cpp.cpp)
add_library(SOCreate MODULE ${SOURCE_FILES})
add_executable(SOCPPTest ${SOURCE_FILES})
# add_library(CLionProjects SHARED ${SOURCE_FILES})