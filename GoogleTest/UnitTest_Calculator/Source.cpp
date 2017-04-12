#include "gtest/gtest.h"
#include "Simple_Calculator.h"

TEST(testCalculator, AdditionTest)
{
	MyCalculator mycalc;
	EXPECT_EQ(2, mycalc.Addition(1, 1));
}