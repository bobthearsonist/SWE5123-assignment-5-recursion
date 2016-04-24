#include <vector>

class Fibonacci
{
private:
	int numberOfValuesToCalculate;
	std::vector<int> sequence;
public:
	int Recursive(int i);
	Fibonacci(int numberOfValuesToCalculate);
	std::vector<int> Recursive();
};