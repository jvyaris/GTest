#pragma once
#include <iostream>

class MyCalculator
{
public:
	MyCalculator() {}
	~MyCalculator() {}

	int Addition(int a, int b)
	{
		return a + b;
	}
	int Subtraction(int a, int b)
	{
		return a - b;
	}
	int Multiplication(int a, int b)
	{
		return a * b;
	}
	int Division(int a, int b)
	{
		if (a == 0 || b == 0)
		{
			printf("Undefined");
			return 0;
		}
		return a / b;
	}
};