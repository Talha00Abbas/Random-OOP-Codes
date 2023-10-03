#pragma once
#include <iostream>
using namespace std;

class ShallowCopy
{
public:
	int* hours = new int[2];
	int min = 0;
	int sec = 0;

	ShallowCopy()
	{
		hours = new int[2];
		min = 0;
		sec = 0;
	}

	//SETTERS
	void setHours(int* i) { hours = i; }
	void setMin(int i) { min = i; }
	void setSec(int i) { sec = i; }

	//GETTERS
	int* getHours() { return hours; }
	int getMin() { return min; }
	int getSec() { return sec; }

};


class DeepCopy
{
public:
	DeepCopy()
	{
		hours = new int[2];
		min = 0;
		sec = 0;
	}

	DeepCopy(DeepCopy& i)
	{
		hours = i.hours;
		min = i.min;
		sec = i.sec;
	}
	//SETTERS
	void setHours(int* i) { hours = i; }
	void setMin(int i) { min = i; }
	void setSec(int i) { sec = i; }

	//GETTERS
	int* getHours() { return hours; }
	int getMin() { return min; }
	int getSec() { return sec; }


	void HtoM()
	{
		cout << "From hours = " << hours[0] << endl;
		while (hours[0] >= 0)
		{
			hours[0] -= 1;
			min += 60;

		}
		cout << "To minutes = " << min << endl;
	}

	void MtoS()
	{
		cout << "From minutes = " << min << endl;
		while (min >= 0)
		{
			min -= 1;
			sec += 60;
		}
		cout << "To secs = " << sec << endl;
	}

	void StoM()
	{
		cout << "From secs = " << sec << endl;
		while (sec >= 0)
		{
			sec -= 60;
			min += 1;
		}
		cout << "To minutes = " << min << endl;
	}

	void MtoH()
	{
		cout << "From minutes = " << min << endl;
		while (min >= 0)
		{
			min -= 60;
			hours[0] += 1;
		}
		cout << "To hours = " << hours[0] << endl;
	}

private:
	int* hours = new int[2];
	int min = 0;
	int sec = 0;


};


class Vector
{
public:
	Vector() 
	{
		arr = new int[0, 0, 0];
	}

	Vector(Vector& j)
	{
		for (int i = 0; i < 3; i++)
		{
			arr[i] = j.arr[i];
		}
	}


	void setArray() 
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter " << i << " element " << endl;
			cin >> arr[i];
		}
	}
	int* getArr() { return arr; }



	~Vector() 
	{
		delete arr;
	}

private:
	int* arr = new int[3];

};