cmake_minimum_required(VERSION 3.10)
project(ConsoleMenu)

set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(ConsoleMenu 
    main.cpp 
    menu_functions.cpp 
    menu_items.cpp
)
