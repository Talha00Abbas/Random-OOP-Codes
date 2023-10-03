#pragma once
#include <iostream>
using namespace std;

int add(int a, int b) 
{
	int res = a + b;
	cout << "Add = " << res << endl;
	return a + b;
}

int subtract(int a, int b)
{
	int res = a - b;
	cout << "Subtract = " << res << endl;
	return a - b;
}

int Div(int a, int b)
{
	int res = a / b;
	cout << "Div = " << res << endl;
	return a / b;
}

int product(int a, int b)
{
	int res = a * b;
	cout << "Product = " << res << endl;
	if (b ==0)
	{
		return 0;
	}
	return a * b;
}

