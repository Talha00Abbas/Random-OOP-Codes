#include "pch.h"
#include "21I2544-C.h"
#include <iostream>
using namespace std;

TEST(Task1, TestCase1) {
	Distance distanceObj1(12, 13), distanceObj2(12, 15), distanceObj3;
	distanceObj3 = distanceObj1 + distanceObj2;
	EXPECT_EQ(26, distanceObj3.getFeets());
	EXPECT_EQ(4, distanceObj3.getInches());
	EXPECT_TRUE(true);
}

TEST(Task1, TestCase2) {
	Distance distanceObj1(12, 13), distanceObj2(12, 15), distanceObj3;
	distanceObj3 = distanceObj1 - distanceObj2;
	EXPECT_EQ(0, distanceObj3.getFeets());
	EXPECT_EQ(-2, distanceObj3.getInches());
	EXPECT_TRUE(true);
}

TEST(Task1, TestCase3) {
	Distance distanceObj1(12, 13), distanceObj2(12, 15);
	EXPECT_EQ(false, distanceObj1.operator==(distanceObj2));
	EXPECT_TRUE(true);
}

TEST(Task1, TestCase4) {
	Distance distanceObj1(12, 13), distanceObj2(12, 13);
	EXPECT_EQ(true, distanceObj1.operator==(distanceObj2));
	EXPECT_TRUE(true);
}

TEST(Task2, testCase1) {
	Product obj1(5, 1), obj2(6, 2);
	obj2 = obj1;
	EXPECT_EQ(5, obj2.getQuantity());
	EXPECT_TRUE(true);
}

TEST(Task2, testCase2) {
	Product obj1(5, 1);
	obj1 -= 5;
	EXPECT_EQ(0, obj1.getQuantity());
	EXPECT_TRUE(true);
}

int main() {

	Vector v;
	Vector v2;

	v.setArray(1);
	v2.setArray(2);

	Vector temp = v - v2;

	temp.getArray();
}