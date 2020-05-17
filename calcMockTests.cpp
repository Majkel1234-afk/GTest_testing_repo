#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "calc.hpp"

class CalculatorMock : CalculatorInterface
{
public:
	MOCK_METHOD2(addition, double(double,double));
	MOCK_METHOD2(subtraction, double(double,double));
	MOCK_METHOD2(multiplication, double(double,double));
	MOCK_METHOD2(division, double(double,double));
};

class mockTestFixture : public ::testing::Test
{
public:
	CalculatorMock mock{};
	CalculatorUser user{mock};
};

TEST_F(mockTestFixture, additionMethodMockTest)
{
	EXPECT_CALL(mock, addition(0,0)).Times(::testing::Exactly(1));
	user.addSomeNumbers(0,0);
}

TEST_F(mockTestFixture, subtractionMethodMockTest)
{
	EXPECT_CALL(mock, subtraction(0,0)).Times(::testing::Exactly(1));
	user.subtractSomeNumbers(0,0);
}
