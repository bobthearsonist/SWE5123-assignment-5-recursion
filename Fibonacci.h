#include <vector>
#include <ostream>
#include <iostream>

class Fibonacci
{
public:
	int count = 0;
	std::vector<int> sequence;

	int Recursive(int);
	std::vector<int> Iterative(int);
	std::vector<int> Sequence(int);
	friend std::ostream& operator<<(std::ostream& stream, const Fibonacci& fibonacci);
};

inline std::ostream& operator<<(std::ostream& stream, const Fibonacci& fibonacci)
{
	for (std::vector<int>::const_iterator iterator = fibonacci.sequence.begin(); iterator < fibonacci.sequence.end(); ++iterator)
	{
		stream << *iterator << std::endl;
	}
	return stream;
}