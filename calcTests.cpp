#include <gtest/gtest.h>
#include "calc.hpp"

class calcFixture : public ::testing::Test
{
public:
	Calculator calc;
};

TEST_F(calcFixture, additionMethodTest)
{
	double a = 1.1, b = 2.2;
	EXPECT_DOUBLE_EQ(calc.addition(a,b), 3.3);
}

TEST_F(calcFixture, subtractionMethod0ValueTest)
{
	double a = 3.3, b = 0;
	EXPECT_DOUBLE_EQ(calc.subtraction(a,b), 3.3);
}

TEST_F(calcFixture, subtractionMethodTest)
{
	double a = 1.1, b = 2.2;
	EXPECT_DOUBLE_EQ(calc.subtraction(a,b), -1.1);
}

TEST_F(calcFixture, multiplicationMethod0ValueTest)
{
	double a = 1.1, b = 0;
	EXPECT_DOUBLE_EQ(calc.multiplication(a,b), 0);
}

TEST_F(calcFixture, multiplicationMethod1ValueTest)
{
	double a = 3.3, b = 5;
	EXPECT_DOUBLE_EQ(calc.multiplication(a,b), 16.5);
}

//dopisz dzielenie
