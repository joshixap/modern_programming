target_sources(insertion_sort_mf 
	PRIVATE
		${PROJECT_SOURCE_DIR}/sortings/sortings.cpp
		${PROJECT_SOURCE_DIR}/sortings/sortings.hpp
)

target_include_directories(insertion_sort_mf PRIVATE
	"${PROJECT_SOURCE_DIR}/sortings"
)

