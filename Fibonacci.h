#include <vector>
#include <ostream>
#include <iostream>

class Fibonacci
{
public:
	/*
	must be manually reset to perform a new calculation
	*/
	int count = 0;
	/*
	must be manually reset to perform a new calculation
	*/
	std::vector<int> sequence;

	/*
	post-condition: sequence contains the fibonacci series to the n-th index from 0, count contains the
	number of iterations performed to calculate the series (including n=0 and n=1)
	sequence is returned as it exists at the end of the calculation
	*/
	std::vector<int> CalculcateIteratively(unsigned int n);
	/*
	post-condition: sequence contains the fibonacci series to the n-th index from 0, count contains the
	number of operations (recursive calls) performed to calculate the series (including n=0 and n=1)
	sequence is returned as it exists at the end of the calculation
	*/
	std::vector<int> CalculateRecursively(unsigned int n);
	/*
	pre-condition: stream and fibonacci are not null
	post-condition: the vlaues of sequence and the count are output to the stream
	*/
	friend std::ostream& operator<<(std::ostream& stream, const Fibonacci& fibonacci);
private:
	/*
	post-condition: the n-th fibonacci number is returned, indexing from zero
	*/
	int RecursiveHelper(int n);
};

inline std::ostream& operator<<(std::ostream& stream, const Fibonacci& fibonacci)
{
	for (std::vector<int>::const_iterator iterator = fibonacci.sequence.begin(); iterator < fibonacci.sequence.end(); ++iterator)
	{
		stream << *iterator << std::endl;
	}

	stream << "count:" << fibonacci.count << std::endl;
	return stream;
}