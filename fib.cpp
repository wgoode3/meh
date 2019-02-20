#include <iostream>

int rFib(int n)
{
    return n < 2 ? n : rFib(n-1) + rFib(n-2);
}

int main()
{
	for(int i=0; i<11; i++)
	{
		std::cout << "Fibonacci of " << i << " is " << rFib(i) << "\n";
	}
	return 0;
}