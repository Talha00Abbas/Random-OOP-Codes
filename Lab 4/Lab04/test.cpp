#include "header1.h"
#include "pch.h"
#include <random>
//#include"gtest/gtest.h"
#include <iostream>
using namespace std;
//
////Task03 - Testcase
//TEST(Task3, Test1) {
//	int*** ptr = new int** [3];
//	int** newArr = new int* [3];
//	for (int i = 0; i < 3; i++) {
//		*(ptr + i) = new int* [3];
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			*(*(ptr + i) + j) = new int[3];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		*(newArr + i) = new int[3];
//	}
//	*(*(*(newArr + 0) + 0) + 0) = 2;
//	*(*(*(newArr + 1) + 0) + 0) = 4;
//	*(*(*(newArr + 2) + 0) + 0) = 8;
//	EXPECT_EQ(testFunction(ptr, newArr), 7);
//}
//
////Task04 - Testcase
//char** ptr = words_to_sentence(3, 5);
//TEST(Task4, Test1) {
//	EXPECT_EQ('H', ptr[0][0]);
//	EXPECT_EQ('e', ptr[0][1]);
//	EXPECT_EQ('l', ptr[0][2]);
//	EXPECT_EQ('l', ptr[0][3]);
//	EXPECT_EQ('o', ptr[0][4]);
//}
//TEST(Task4, Test2) {
//	EXPECT_EQ('w', ptr[1][0]);
//	EXPECT_EQ('o', ptr[1][1]);
//	EXPECT_EQ('r', ptr[1][2]);
//	EXPECT_EQ('l', ptr[1][3]);
//	EXPECT_EQ('d', ptr[1][4]);
//}
//TEST(Task4, Test3) {
//	EXPECT_EQ('h', ptr[2][0]);
//	EXPECT_EQ('o', ptr[2][1]);
//	EXPECT_EQ('w', ptr[2][2]);
//}

int main() 
{

	cout<<"Yes"<<endl;
	displayArray(5, 5);
}