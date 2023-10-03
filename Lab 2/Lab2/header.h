#pragma once
#include <iostream>
using namespace std;

float task1() 
{
	float* num = new float;

	float* alias = num;
	
	do
	{
		cin >> *num;
	} while (*num < 0 || *num >= 100);

	if (*alias >= 90 && *alias <= 99.99)
	{
		cout << "Congratulations You Got A+ Grade" << endl;
	}

	if (*alias >= 80 && *alias <= 90)
	{
		cout << "Nice Work Son. You Got B Grade" << endl;
	}

	if (*alias >= 70 && *alias <= 80)
	{
		cout << "Good You Got C Grade" << endl;
	}

	if (*alias >= 60 && *alias <= 70)
	{
		cout << "Sorry You Got D Grade : (" << endl;
	}

	if (*alias <= 50)
	{
		cout << "You Failed Badly. Pressing F for respect" << endl;
	}

	float a = *num;
	delete num;
	return a;

}

float task2() 
{
	float* num;

	num = new float;

	cout << "Enter a number for factorial";

	cin >> *num;

	if (num != 0)
	{
		float fact = 1;

		for (float i = 1; i <= *num; i++)
		{
			fact = fact * i;
		}

		cout << "\nfact : " << fact << "\n";
		return fact;
	}
	else
	{
		cout << "Invalid Input";
	}

	delete num;
}

int task3() 
{
	int* num = new int;
	int* num2 = new int;
	int* num3 = new int;

	cout << "Enter 3 numbers" << endl;
	cin >> *num;
	cin >> *num2;
	cin >> *num3;

	if (*num > *num2 && *num > *num3)
	{
		cout << "1st number entered is the largest " << endl;
	}

	else if (*num2 > *num && *num2 > *num3)
	{
		cout << "2nd number entered is the largest " << endl;
	}

	else if (*num3 > *num2 && *num3 > *num)
	{
		cout << "3rd number entered is the largest " << endl;
	}
	else
	{
		cout << "All numbers are same" << endl;
	}

	int a = *num > *num2 ? *num : *num2 > *num3 ? *num2 : *num3;
	cout << "Largest number in ternary is " << a << endl;

	

	delete num;
	delete num2;
	delete num3;

	return a;

}

double discount(double* amount)
{

	if (*amount > 2000)
	{
		cout << "Discount is applicable" << endl;
		cout << "The total purchase value after discount : " << (*amount - (*amount * 0.1)) << endl;
	}
	else
	{
		cout << "Discount is not applicable. Amount is less than 2000" << endl;
		cout << "Purchase value is : " << *amount << endl;
	}

	return *amount;
}

double task4()
{
	double* amm = new double;
	cout << "Enter Purchase Value : ";

	cin >> *amm;
	discount(amm);

	int a = *amm;

	delete amm;

	return a;
}