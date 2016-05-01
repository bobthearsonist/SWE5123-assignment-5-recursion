// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "Fibonacci.h"
#include "Exponent.h"
#include <iostream>

using namespace std;

int main()
{
	Fibonacci fibonacci;

	/*
	calculate the sequence, print the values and count to the console, then reset
	*/
	//recursive method
	vector<int> recursivelyCalculatedSequence = fibonacci.CalculateRecursively(30);
	cout << fibonacci << endl;
	fibonacci.sequence.clear();
	fibonacci.count = 0;
	//iterative method
	vector<int> iterativelyCalculatedSequence = fibonacci.CalculcateIteratively(30);
	cout << fibonacci << endl;
	fibonacci.sequence.clear();
	fibonacci.count = 0;

	/*
	exponentiation by squaring, print the value followed the number of operations, 
	using each method of calculation for various conditions
	*/
	//postive whole values
	ExponentiationBySquares exponent;
	cout << exponent.CalculateRecursively(2, 32);
	cout << " count:" << exponent.count << endl;
	exponent.count = 0;
	cout << exponent.CalculateIteratively(2, 32);
	cout << " count:" << exponent.count << endl;
	exponent.count = 0;
	//negative whole values
	cout << exponent.CalculateRecursively(-2, 4);
	cout << " count:" << exponent.count << endl;
	exponent.count = 0;
	cout << exponent.CalculateIteratively(-2, 4);
	cout << " count:" << exponent.count << endl;
	exponent.count = 0;
	cout << exponent.CalculateRecursively(-2, -4);
	cout << " count:" << exponent.count << endl;
	exponent.count = 0;
	cout << exponent.CalculateIteratively(-2, -4);
	cout << " count:" << exponent.count << endl;
	exponent.count = 0;
	//negative decimal values
	cout << exponent.CalculateRecursively(1.2, 5);
	cout << " count:" << exponent.count << endl;
	exponent.count = 0;
	cout << exponent.CalculateIteratively(1.2, 5);
	cout << " count:" << exponent.count << endl;
	exponent.count = 0;

	return 0;
}