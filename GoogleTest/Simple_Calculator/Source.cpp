#include <iostream>
#include "Simple_Calculator.h"

using namespace std;

void main()
{
	MyCalculator myCalc;

	printf("5 + 5 = %d\n", myCalc.Addition(5, 5));
	printf("5 - 5 = %d\n", myCalc.Subtraction(5, 5));
	printf("5 * 5 = %d\n", myCalc.Multiplication(5, 5));
	printf("5 / 5 = %d\n", myCalc.Division(5, 5));

	getchar();
}