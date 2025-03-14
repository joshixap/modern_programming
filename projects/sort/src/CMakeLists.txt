target_sources(insertion_sort_lib 
    PRIVATE 
        insertion_sort.cpp
)

target_include_directories(insertion_sort_lib PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)
