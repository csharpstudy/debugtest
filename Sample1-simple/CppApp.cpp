// CppApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Sum(int a, int b, int c, int d)
{
	int s = a + b + c + d;
	return s;
}

int Calc(int i, int j)
{
	int sum = Sum(1, 2, 3, 4);
	int result = i * j - sum;
	return result;
}

int main()
{
	int a = 1;
	int b = 2;

	int res = Calc(a, b);
	std::cout << res;
}

