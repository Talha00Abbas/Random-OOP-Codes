#pragma once
#include<iostream>
#include <random>
using namespace std;

char** words_to_sentence(int rows, int cols) 
{
	char** words = new char* [rows];
	for (int i = 0; i < rows; i++)
	{
		words[i] = new char[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> words[i][j];
		}
	}
	return words;
}