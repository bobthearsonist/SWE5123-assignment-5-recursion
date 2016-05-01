#include "Fibonacci.h"

int Fibonacci::RecursiveHelper(int i)
{
	++count;
	if (i == 0)
	{
		return 0;
	}
	if (i == 1)
	{
		return 1;
	}
	return RecursiveHelper(i-2) + RecursiveHelper(i - 1);
}

std::vector<int> Fibonacci::CalculcateIteratively(unsigned int numberOfValuesInSequence)
{
	for (int iterator = 0 ; iterator < numberOfValuesInSequence ; ++iterator)
	{
		++count;
		if(iterator == 0)
		{
			sequence.push_back(0);
		}
		else if(iterator == 1)
		{
			sequence.push_back(1);
		}
		else
		{
			sequence.push_back(sequence[iterator - 1] + sequence[iterator - 2]);
		}
	}
	return sequence;
}

std::vector<int> Fibonacci::CalculateRecursively(unsigned int numberOfValuesInSequence)
{
	for (int i = 0; i < numberOfValuesInSequence; ++i)
	{
		sequence.push_back(RecursiveHelper(i));
	}
	return sequence;
}