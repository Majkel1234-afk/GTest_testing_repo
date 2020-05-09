#include <string>
#include "calc.hpp"

Calculator::Calculator()
{}

double Calculator::addition(double a, double b)
{
	return a+b;
}

double Calculator::subtraction(double a, double b)
{
	return a-b;
}

double Calculator::multiplication(double a, double b)
{
	return (!a || !b)? 0 : a*b;
}

double Calculator::division(double a, double b)
{
	if(!a || !b) throw std::string{"You cannot divide by 0!"};
	return a/b;
}



CalculatorUser::CalculatorUser(std::shared_ptr<CalculatorInterface> calc): calc_{calc}
{}

double CalculatorUser::addSomeNumbers(double a, double b)
{
	return calc_->addition(a, b);
}

double CalculatorUser::subtractSomeNumbers(double a, double b)
{
	return calc_->subtraction(a, b);
}

double CalculatorUser::multiplySomeNumbers(double a, double b)
{
	return calc_->multiplication(a, b);
}

double CalculatorUser::divideSomeNumbers(double a, double b)
{
	return calc_->division(a, b);
}
