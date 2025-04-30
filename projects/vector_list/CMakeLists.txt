project(sort)

set(SCL_LIB "vector_list_sort_lib")
add_library(
	${SCL_LIB} ""
	src/doubly_linked_list.cpp
	src/vector.cpp
)

add_subdirectory(src)
add_subdirectory(tests)