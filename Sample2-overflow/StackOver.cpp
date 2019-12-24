// stackoverflow sample
#include <iostream>

int Calc(int i, int j)
{
	int a = i + j;
	int b = Calc(a, i);
	return b;
}

int main()
{
	int a = 1;
	int b = 2;

	int res = Calc(a, b);
	std::cout << res;
}
