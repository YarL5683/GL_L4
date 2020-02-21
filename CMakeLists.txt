cmake_minimum_required(VERSION 3.0)
project(GL_L4)

#Set C++ version//LOOOK CHAT
set(CMAKE_CXX_STANDARD 11)

#Set variable
set(SOURCE_EXE main.cpp)
set(SOURCE_LIB bucket.cpp)

#Add executable file & library
add_executable(main ${SOURCE_EXE})
add_library(bucket STATIC ${SOURCE_LIB})

#Link program & library
target_link_libraries(main bucket)