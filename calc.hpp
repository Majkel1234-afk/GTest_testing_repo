#pragma once

class CalculatorInterface
{
public:
	virtual double addition(double,double) = 0;
	virtual double subtraction(double,double) = 0;
	virtual double multiplication(double,double) = 0;
	virtual double division(double,double) = 0;
};


class Calculator : public CalculatorInterface
{
public:
	Calculator();
	double addition(double,double);
	double subtraction(double,double);
	double multiplication(double,double);
	double division(double,double);
};

class CalculatorUser
{
public:
	CalculatorUser(CalculatorInterface&);
	double addSomeNumbers(double,double);
	double subtractSomeNumbers(double,double);
	double multiplySomeNumbers(double,double);
	double divideSomeNumbers(double,double);
private:
	CalculatorInterface& calc_;
};

