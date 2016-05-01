class ExponentiationBySquares
{
	/*
	post-condition: boolean value returned indicating if integer is even
	*/
	static bool isEven(int);
public:
	int count = 0;
	/*
	post-condition: a float representing base^exponent is calculated using recursion and returned. Count
	is updated to contain the number of recursive entries.

	can throw out of memory exception
	*/
	double CalculateRecursively(double base, int exponent);
	/*
	post-condition: a float representing base^exponent is calculated using recursion and returned. Count
	is updated to contain the number of iterations.
	*/
	double CalculateIteratively(double base, int exponent);
};
