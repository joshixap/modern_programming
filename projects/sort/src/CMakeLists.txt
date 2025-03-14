target_sources(sort 
	PRIVATE
		bubble_sort.cpp
		bubble_sort.hpp
)

target_include_directories(sort PRIVATE
	"${PROJECT_SOURCE_DIR}/src"
)