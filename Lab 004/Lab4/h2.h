#pragma once
#include<iostream>
using namespace std;

int*** createFillAndReturn3DArray(int x, int y, int z) 
{
	int count = 0;
	int*** a = new int** [x];

	for (int i = 0; i < x; i++) 
	{
		a[i] = new int* [y];

		for (int j = 0; j < y; j++) 
		{
			a[i][j] = new int[z];
		}
	}

	for (int i = 0; i < x; i++) 
	{
		for (int j = 0; j < y; j++) 
		{
			for (int k = 0; k < z; k++) 
			{

				// Assign values to the
				// memory blocks created
				a[i][j][k] = ++count;
			}
		}
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			for (int k = 0; k < z; k++) {

				// Print values of the
				// memory blocks created
				cout << a[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return a;
}


int*** define3DArray(int rows, int columns, int depth) {
	int*** arr = new int** [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int* [columns];
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = new int[depth];
			for (int k = 0; k < depth; k++)
			{
				arr[i][j][k] = i + j;
			}
		}
	}
	return arr;
}

float findAverageOf3DArray(int*** array, int rows, int columns, int depth) {
	array = define3DArray(rows, columns, depth);
	int sum = 0;
	int total = rows * rows * columns;
	float avg = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			for (int k = 0; k < depth; k++)
			{
				sum += array[i][j][k] = i + j;
			}
		}
	}
	avg = sum / total;
	cout << avg;
	return avg;
}