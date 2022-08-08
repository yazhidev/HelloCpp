cmake_minimum_required(VERSION 3.21)
project(HelloCpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(HelloCpp
        test.cpp pointer.cpp pointer.h vector_test.cpp vector_test.h set_test.cpp set_test.h)