// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "Fibonacci.h"
#include "Exponent.h"
#include <iostream>

using namespace std;

int main()
{
	Fibonacci fib;
	int i = fib.Recursive(6);
	fib.count = 0;
	vector<int> recursive = fib.Sequence(6);
	cout << fib << endl;
	fib.sequence.clear();
	fib.count = 0;
	vector<int> iterative = fib.Iterative(6);
	cout << fib << endl;

	Exponent exponent;
	int j = exponent.recursive(2, 16);
	exponent.count = 0;
	int k = exponent.iterative(2, 16);

	return 0;
}