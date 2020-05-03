#include <gtest/gtest.h>
#include <vector>
#include "calc.hpp"

//#commitTest01
//#commitTest02
class calcParamsFixture : public ::testing::TestWithParam<double>
{
public:
	Calculator calc;
	static std::vector<double> params;
};

std::vector<double> calcParamsFixture::params{1.1, 2.2, 3.3};

INSTANTIATE_TEST_CASE_P(someRandomName, calcParamsFixture, ::testing::ValuesIn(::calcParamsFixture::params));

TEST_P(calcParamsFixture, additionParamsTest)
{
	auto value = GetParam();
	EXPECT_DOUBLE_EQ(calc.addition(value, 1), {value+1});
}

TEST_P(calcParamsFixture, subtractionParamsTest)
{
	auto value = GetParam();
	EXPECT_DOUBLE_EQ(calc.subtraction(value, 1), {value-1});
}

TEST_P(calcParamsFixture, multiplicationParamsTest)
{
	auto value = GetParam();
	EXPECT_DOUBLE_EQ(calc.multiplication(value, 2), {value*2});
}

TEST_P(calcParamsFixture, divisionParamsCorrectValueTest)
{
	auto value = GetParam();
	EXPECT_DOUBLE_EQ(calc.division(value, 1), {value/1});
}

TEST_P(calcParamsFixture, divisionParamsIncorrectValueTest)
{
	auto value = GetParam();
	EXPECT_THROW(calc.division(value, 0), std::string);
}
