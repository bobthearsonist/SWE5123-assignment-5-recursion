/*
full credit to https://en.wikipedia.org/wiki/Exponentiation_by_squaring#Basic_method
Function exp - by - squaring(x, n)
if n < 0  then return exp - by - squaring(1 / x, -n);
else if n = 0  then return  1;
else if n = 1  then return  x;
else if n is even  then return exp - by - squaring(x * x, n / 2);
else if n is odd  then return x * exp - by - squaring(x * x, (n - 1) / 2).
*/

#include "Exponent.h"
float Exponent::recursive(float x, int n)
{
	++count;
	if( n < 0 )
	{
		return recursive( 1 / x, -n);
	}
	
	if(n == 0)
	{
		return 1;
	}

	if( n == 1 )
	{
		return x;
	}

	if( isEven(n) )
	{
		return recursive(x*x, n / 2);
	}

	return x*recursive(x*x, (n - 1) / 2);
}

bool Exponent::isEven(int i)
{
	return ((i % 2) == 0);
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
float Exponent::iterative(float x, int n )
{
	if( n < 0)
	{
		x = 1 / x;
		n = -n;
	}
	if(n == 0)
	{
		return 1;
	}
	int y = 1;
	while(n > 1)
	{
		++count;
		if(isEven(n))
		{
			x = x * x;
			n = n / 2;
		}
		else
		{
			y = x * y;
			x = x * x;
			n = (n - 1) / 2;
		}
	}
	return x*y;
}
