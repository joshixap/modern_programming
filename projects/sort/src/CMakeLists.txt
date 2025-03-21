target_sources(${SCL_LIB} 
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src/insertion_sort.cpp
    PUBLIC
        ${PROJECT_SOURCE_DIR}/src/insertion_sort.hpp
)

target_include_directories(${SCL_LIB} PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)
