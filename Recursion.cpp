// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "Fibonacci.h"
#include <iostream>

using namespace std;

int main()
{
	Fibonacci fib;
	int i = fib.Recursive(6);
	std::vector<int> sequence = fib.Sequence(6);
	cout << fib << endl;
	return 0;
}