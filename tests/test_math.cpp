#include <gtest/gtest.h>
#include "math.h"

TEST(MathTest, AddPositive) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(MathTest, AddNegative) {
    EXPECT_EQ(add(-1, -1), -2);
}
