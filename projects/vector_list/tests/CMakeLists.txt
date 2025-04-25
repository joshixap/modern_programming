set(SOURCES 
    test_doubly_linked_list.cpp
    test_vector.cpp
)

add_executable(test_vector_list ${SOURCES})

target_link_libraries(test_vector_list 
    gtest_main 
    vector_list_sort_lib 
)

add_test(test_vector_list test_vector_list)
