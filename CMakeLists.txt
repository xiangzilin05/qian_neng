cmake_minimum_required(VERSION 3.7)
project(qian_neng)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp 08/02/cat.cpp 08/02/cat.h 08/03/date.cpp 08/03/date.h 08/04/time.cpp 08/04/time.h)
add_executable(qian_neng ${SOURCE_FILES})