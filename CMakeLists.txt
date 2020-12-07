cmake_minimum_required(VERSION 3.17)
project(tpool C)

set(CMAKE_C_STANDARD 11)

add_executable(tpool main.c thpool.c)
target_link_libraries(tpool pthread)