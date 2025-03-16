cmake_minimum_required(VERSION 3.10)
project(projects)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(obuchaika)
add_subdirectory(sort)

set(CMAKE_SUPPRESS_REGENERATION true)

