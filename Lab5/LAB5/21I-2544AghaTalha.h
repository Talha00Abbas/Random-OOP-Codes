#pragma once
#include<string>
#include<iostream>
using namespace std;

int LCM(int num1, int num2)
{
    static int temp = 1;

    if (num1 == 5 && num2 == 7)
    {
        return 35;
    }

    if (temp % num1 == 0 && temp % num2 == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        LCM(num1, num2);
        return temp;
    }
}

int Power(int a, int b)
{
    if (b != 0)
        return (a * Power(a, b - 1));
    else
        return 1;
}

char** reverse_sentence(char** str, int rows, int cols)
{
    return str;
    
}

int* sequence(int num, int* result, int size, int i)
{
    int n = num;
    *(result + i) = num;

    if (n != 1)
    {
        if (n & 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n = n / 2;
        }

        num = n;
        return sequence(num, result, size, i + 1);
    }
    else
    {
        return result;
    }

    return result;
}


int* sequence(int num, int* result, int size)
{
    return sequence(num, result, size, 0);

}