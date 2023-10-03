// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Display(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        cout << "Index : " << arr[i] << endl;
    }
}

void modifyArray(int arr[], int size)
{                                               // arr[100,100,100,100,100]
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Array number : ";        //arr[55, 44, 33, 22, 11]
        cin >> arr[i];
    }

}

void modifyElement(int e) 
{
    cout << "Real Number was : " << e << endl;              //e = 6
    cout << "Enter element number : ";                       
    cin >> e;                                                //e = 5
    cout << "Changed Number is " << e << endl;                  // e = 5
}


int main()
{
    const int size = 5;
    int numbers[size];
    cout << "Hello World!\n";

    modifyElement(numbers[3]);
    Display(numbers, size);
    cout << endl << endl;
    modifyArray(numbers, size);
    cout << endl << endl;
    Display(numbers, size);



}

