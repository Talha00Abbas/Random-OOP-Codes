#include "pch.h"
#include"../Lab4/h3.h"
//Task04 - Testcase
char** ptr = words_to_sentence(3, 5);
TEST(Task4, Test1) {
	EXPECT_EQ('H', ptr[0][0]);
	EXPECT_EQ('e', ptr[0][1]);
	EXPECT_EQ('l', ptr[0][2]);
	EXPECT_EQ('l', ptr[0][3]);
	EXPECT_EQ('o', ptr[0][4]);
}
TEST(Task4, Test2) {
	EXPECT_EQ('w', ptr[1][0]);
	EXPECT_EQ('o', ptr[1][1]);
	EXPECT_EQ('r', ptr[1][2]);
	EXPECT_EQ('l', ptr[1][3]);
	EXPECT_EQ('d', ptr[1][4]);
}
TEST(Task4, Test3) {
	EXPECT_EQ('h', ptr[2][0]);
	EXPECT_EQ('o', ptr[2][1]);
	EXPECT_EQ('w', ptr[2][2]);
}