#include <iostream>
#include <cstring>

void rInOrderSubsets(std::string str, std::string sub, int i)
{
	if(str.length() == i)
	{
		std::cout << sub << "\n";
		return;
	}
	rInOrderSubsets(str, sub+str[i], i+1);
	rInOrderSubsets(str, sub, i+1);
}

int main()
{
	rInOrderSubsets("abc", "", 0);
	return 0;
}