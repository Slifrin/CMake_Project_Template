#include <gtest/gtest.h>
#include "../example.hpp"

TEST(Example_test_v1, firstTry)
{
    const auto result = func();
    EXPECT_EQ(result, 10);
}