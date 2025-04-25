project(sort)

set(SCL_LIB "vector_list_sort_lib")
add_library(${SCL_LIB} "")

add_subdirectory(src)
add_subdirectory(test)