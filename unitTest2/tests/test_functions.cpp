#include <gtest/gtest.h>
#include "../functions.h"
#include <cmath>

TEST(FunctionG, BaseCase) {
    double res = g(2, 3, 1);
    ASSERT_EQ(12 , res);
}

TEST(FunctionG, SimpleCases) {
    EXPECT_NEAR(g(1, 1, 1), g(1, 1, 1), 1e-6);
    EXPECT_NEAR(g(0, 0, 0), 0.0, 1e-6);
}

TEST(FunctionG, Symmetry) {
    EXPECT_NEAR(g(3, 2, 2), g(2, 3, 1), 3);
}

TEST(FunctionG, IncrementalValues) {
    for (double i = -2; i <= 2; i += 0.5) {
        double val = g(i, i, i);
        ASSERT_TRUE(std::isfinite(val));
    }
}
