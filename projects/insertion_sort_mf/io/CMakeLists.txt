target_sources(insertion_sort_mf 
	PRIVATE
		${PROJECT_SOURCE_DIR}/io/io.cpp
		${PROJECT_SOURCE_DIR}/io/io.hpp
)

target_include_directories(insertion_sort_mf PRIVATE
	"${PROJECT_SOURCE_DIR}/io"
)