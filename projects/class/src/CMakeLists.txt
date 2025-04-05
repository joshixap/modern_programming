target_sources(${SCL_LIB} 
	PRIVATE
		${PROJECT_SOURCE_DIR}/src/long_number.cpp
	PUBLIC
		${PROJECT_SOURCE_DIR}/src/long_number.hpp
)

target_include_directories(${SCL_LIB} PUBLIC
	${PROJECT_SOURCE_DIR}/src
)