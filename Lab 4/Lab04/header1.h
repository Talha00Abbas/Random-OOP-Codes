#pragma once
#include<iostream>
#include <random>
using namespace std;
//Uses '#include<random>' header file
int randomInteger() {
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<std::mt19937::result_type> dist6(1, 10);
    if (dist6(rng) % 2 == 0) {
        random_device dev2;
        mt19937 rng2(dev2());
        uniform_int_distribution<std::mt19937::result_type> dist1(1, 1000);
        return dist1(rng);
    }
    else {
        random_device dev2;
        mt19937 rng2(dev2());
        uniform_int_distribution<std::mt19937::result_type> dist1(1, 1000);
        return -1 * dist1(rng2);
    }
}

void displayArray(int **ptr, int rows, int cols)
{
	ptr = new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		ptr[i] = new int[cols];
	}

	cout << "Enter Array Elements" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			ptr[i][j] = randomInteger();
		}
	}


}