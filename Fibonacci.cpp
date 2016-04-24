#include "Fibonacci.h"

int Fibonacci::Recursive(int i)
{
	if (i == 0)
	{
		return 0;
	}
	if (i == 1)
	{
		return 1;
	}
	return Recursive(i-2) + Recursive(i - 1);
}

Fibonacci::Fibonacci(int numberOfValuesToCalculate) : numberOfValuesToCalculate(0)
{
	this->numberOfValuesToCalculate = numberOfValuesToCalculate;
}

std::vector<int> Fibonacci::Recursive()
{
	return std::vector<int>();
}