target_sources(${SCL_LIB}  
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}/insertion_sort.cpp
)

target_include_directories(${SCL_LIB} PUBLIC
    "${PROJECT_SOURCE_DIR}/sort/src"
)
