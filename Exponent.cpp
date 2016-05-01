#include "Exponent.h"

/*
full credit to https://en.wikipedia.org/wiki/Exponentiation_by_squaring#Basic_method
Function exp - by - squaring(x, n)
if n < 0  then return exp - by - squaring(1 / x, -n);
else if n = 0  then return  1;
else if n = 1  then return  x;
else if n is even  then return exp - by - squaring(x * x, n / 2);
else if n is odd  then return x * exp - by - squaring(x * x, (n - 1) / 2).
*/
double ExponentiationBySquares::CalculateRecursively(double base, int exponent)
{
	++count;
	if( exponent < 0 )
	{
		return CalculateRecursively( 1 / base, -exponent);
	}
	
	if(exponent == 0)
	{
		return 1;
	}

	if( exponent == 1 )
	{
		return base;
	}

	if( isEven(exponent) )
	{
		return CalculateRecursively(base*base, exponent / 2);
	}

	return base*CalculateRecursively(base*base, (exponent - 1) / 2);
}

/*
again full credit to full credit to https://en.wikipedia.org/wiki/Exponentiation_by_squaring#Basic_method
Function exp-by-squaring-iterative(x, n)
if n < 0 then
x := 1 / x;
n := -n;
if n = 0 then return 1
y := 1;
while n > 1 do
if n is even then
x := x * x;
n := n / 2;
else
y := x * y;
x := x * x;
n := (n – 1) / 2;
return x * y
*/
double ExponentiationBySquares::CalculateIteratively(double base, int exponent )
{
	if( exponent < 0)
	{
		base = 1 / base;
		exponent = -exponent;
	}
	if(exponent == 0)
	{
		return 1;
	}
	double y = 1;
	while(exponent > 1)
	{
		++count;
		if(isEven(exponent))
		{
			base = base * base;
			exponent = exponent / 2;
		}
		else
		{
			y = base * y;
			base = base * base;
			exponent = (exponent - 1) / 2;
		}
	}
	return base*y;
}

bool ExponentiationBySquares::isEven(int integer)
{
	if (integer < 0) integer = -integer;
	return ((integer % 2) == 0);
}
