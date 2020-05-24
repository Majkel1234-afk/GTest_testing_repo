#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "calc.hpp"

class CalculatorMock : public CalculatorInterface
{
public:
	MOCK_METHOD2(addition, double(double,double));
	MOCK_METHOD2(subtraction, double(double,double));
	MOCK_METHOD2(multiplication, double(double,double));
	MOCK_METHOD2(division, double(double,double));
};

class mockTestFixture : public ::testing::Test
{
protected:
	CalculatorMock mock;
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

TEST_F(mockTestFixture, multiplicationMethodMockTest)
{
	EXPECT_CALL(mock, multiplication(1,1)).Times(::testing::Exactly(1));
	user.multiplySomeNumbers(1,1);
}

TEST_F(mockTestFixture, divisionMethodMockTest)
{
	EXPECT_CALL(mock, division(1,1)).Times(::testing::Exactly(1));
	user.divideSomeNumbers(1,1);
}
//0) ogarnij temat segfault z powodu shareda w fixturze {tu jest blad}; 1) dodaj dzielenie; 2) zacommituj (to bedzie trzeci commit w ramach mocka);
//3) zrob squash commita do mastera
