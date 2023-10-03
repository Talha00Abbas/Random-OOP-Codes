#include <iostream>
#include "21I-2544_C.h"
using namespace std;

int main() 
{
	//Q1
	ShallowCopy sc;

	int* hr = new int[2];
	sc.setHours(hr);


	ShallowCopy sc1 = sc;

	cout << sc1.getHours() << endl;



	DeepCopy dc;

	int* hr1 = new int[50, 2];
	int* hr2 = new int[60, 2];
	dc.setHours(hr1);


	DeepCopy dc1 = dc;

	cout << dc1.getHours() << endl;
	dc.setHours(hr2);
	cout << dc1.getHours() << endl;

	//Q2
	Vector vec;

	vec.setArray();
	cout << vec.getArr() << endl;


	Vector vec1 = vec;

	vec.setArray();
	cout << vec1.getArr() << endl;

}