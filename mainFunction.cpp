#include <iostream>
#include <string>
#include "calc.hpp"

void mainFunction()
{
	//1. Calculator's Class Test
	Calculator calc;
	std::cout << "[10.1 + 0] = " << calc.addition(10.1, 0) << std::endl;
	std::cout << "[10.1 + 5.5] = " << calc.addition(10.1, 5.5) << std::endl;

	std::cout << "[5.5 - 0] = " << calc.subtraction(5.5, 0) << std::endl; 
	std::cout << "[5.5 - 2.2] = " << calc.subtraction(5.5, 2.2) << std::endl;

	std::cout << "[3.3 * 0] = " << calc.multiplication(3.3, 0) << std::endl;
	std::cout << "[3.3 * 1.1] = " << calc.multiplication(3.3, 1.1) << std::endl;

	std::cout << "[10.5 / 2] = " << calc.division(10.5, 2) << std::endl;
	try{
		std::cout << "[10.5 / 0] = " << calc.division(10.5, 0) << std::endl;
	}
	catch(const std::string& mess)
	{
		std::cout << mess << std::endl;
	}
}
