cmake_minimum_required(VERSION 3.10)
project(projects)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(sort)
add_subdirectory(obuchaika)
add_subdirectory(insertion_sort)
add_subdirectory(insertion_sort_mf)


set(CMAKE_SUPPRESS_REGENERATION true)

