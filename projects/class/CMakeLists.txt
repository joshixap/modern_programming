project(class)

set(SCL_LIB "long_number_lib")
add_library(${SCL_LIB} "")

add_subdirectory(src)
add_subdirectory(test)