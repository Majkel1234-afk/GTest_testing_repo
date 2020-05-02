#include <gtest/gtest.h>
#include "calc.hpp"

class calcFixture : public ::testing::Test
{
public:
	Calculator calc;
};

TEST_F(calcFixture, additionMethodValueTest0)
{
	double a = 1.1, b = 0;
	EXPECT_DOUBLE_EQ(calc.addition(a,b), 1.1);
}

TEST_F(calcFixture, additionMethodValueTest1)
{
	double a = 1.1, b = 2.2;
	EXPECT_DOUBLE_EQ(calc.addition(a,b), 3.3);
}

TEST_F(calcFixture, subtractionMethodValueTest0)
{
	double a = 3.3, b = 0;
	EXPECT_DOUBLE_EQ(calc.subtraction(a,b), 3.3);
}

TEST_F(calcFixture, subtractionMethodValueTest1)
{
	double a = 1.1, b = 2.2;
	EXPECT_DOUBLE_EQ(calc.subtraction(a,b), -1.1);
}

TEST_F(calcFixture, multiplicationMethodValueTest0)
{
	double a = 1.1, b = 0;
	EXPECT_DOUBLE_EQ(calc.multiplication(a,b), 0);
}

TEST_F(calcFixture, multiplicationMethodValueTest1)
{
	double a = 3.3, b = 5;
	EXPECT_DOUBLE_EQ(calc.multiplication(a,b), 16.5);
}

//dopisz dzielenie
