#include "h1.h"
#include "h2.h"
#include <random>
#include <iostream>
using namespace std;

int main()
{

//#pragma region QUESTION 1 - 2
//
//    int rows, cols;
//
//    cout << "Enter rows" << endl; cin >> rows;
//    cout << "Enter columns" << endl; cin >> cols;
//
//    //Initialization
//    int** ptr = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        ptr[i] = new int[cols];
//    }
//
//    //Display
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            ptr[i][j] = randomInteger();
//        }
//    }
//	displayArray(ptr, rows, cols);
//
//    cout << "Do you want to proceed further to Question 2 ? " << endl;
//    char opt = 'F';
//    cin >> opt;
//    int* newArr = new int[cols];
//    for (int k = 0; k < cols; k++)
//    {
//        newArr[k] = 0;
//    }
//
//    if (opt == 'Y' || opt == 'y')
//    {
//        displaySumArray(ptr, newArr, rows, cols);
//    }
//
//    for (int i = 0; i < cols; i++)
//    {
//        delete *(ptr + i);
//    }
//    delete ptr;
//
//    delete newArr;
//
//#pragma endregion


#pragma region QUESTION 3


    int*** arr = createFillAndReturn3DArray(4,4,4);
    findAverageOf3DArray(arr, 4, 4, 4);








#pragma endregion



}