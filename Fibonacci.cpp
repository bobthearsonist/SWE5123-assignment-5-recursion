#include "Fibonacci.h"

int Fibonacci::Recursive(int i)
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
	return Recursive(i-2) + Recursive(i - 1);
}

std::vector<int> Fibonacci::Iterative(int index)
{
	++count;
	for (int iterator = index ; iterator < index ; ++index)
	{
		if(index == 0)
		{
			sequence.push_back(0);
		}
		else if(index == 1)
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

std::vector<int> Fibonacci::Sequence(int numberOfValuesInSequence)
{
	for (int i = 0; i < numberOfValuesInSequence; ++i)
	{
		sequence.push_back(Recursive(i));
	}
	return sequence;
}