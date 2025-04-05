project(insertion_sort_mf)

add_executable(${PROJECT_NAME}
    main.cpp
    sortings/sortings.cpp
    io/io.cpp
)

add_subdirectory(sortings)
add_subdirectory(io)