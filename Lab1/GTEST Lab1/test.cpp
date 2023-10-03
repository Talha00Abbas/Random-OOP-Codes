#include "pch.h"
#include "i212544.h"

TEST(TestCaseName, Math) {

  EXPECT_EQ(8, add(4, 4));
  EXPECT_EQ(17, subtract(35, 18));
  EXPECT_EQ(9, Div(4, 2));
  EXPECT_EQ(14, product(7, 2));
}