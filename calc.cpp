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
