cmake_minimum_required(VERSION 3.15)

project(cpp_PROJECT LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY "https://github.com/google/googletest"
    GIT_TAG        master
)
FetchContent_GetProperties(googletest)
if (NOT googletest)
    FetchContent_Populate(googletest)
    message("googletest_SOURCE_DIR " ${googletest_SOURCE_DIR} )
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()


enable_testing()

add_library(Example_lib STATIC
    example.cpp
    example.hpp
)

add_subdirectory(TESTS)

add_executable(cpp_PROJECT 
    main.cpp
    )

target_link_libraries(cpp_PROJECT PUBLIC
    Example_lib
    )