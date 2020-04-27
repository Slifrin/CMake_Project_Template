set(This spr_tests_v1)

add_executable(${This} sprTest1.cpp)
target_link_libraries(${This} PUBLIC
    gtest_main
    Example_lib
)

add_test(
    NAME ${This}
    COMMAND ${This}
)