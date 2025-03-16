project(sort)

set(SCL_LIB "insertion_sort")
add_library(${SCL_LIB} "")

add_subdirectory(src)
add_subdirectory(test)