target_sources(${SCL_LIB} 
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src/doubly_linked_list.cpp
	${PROJECT_SOURCE_DIR}/src/vector.cpp
    PUBLIC
        ${PROJECT_SOURCE_DIR}/src/doubly_linked_list.hpp
	${PROJECT_SOURCE_DIR}/src/vector.hpp
)

target_include_directories(${SCL_LIB} PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)
