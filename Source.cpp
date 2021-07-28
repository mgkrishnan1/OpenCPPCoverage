#include <iostream>
#include "gtest/gtest.h"


#include "src/gtest.cc"
#include "src/gtest-death-test.cc"
#include "src/gtest-filepath.cc"
#include "src/gtest-port.cc"
#include "src/gtest-printers.cc"
#include "src/gtest-test-part.cc"
#include "src/gtest-typed-test.cc"

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
/*
TEST(addTest, Test1)
{
	ASSERT_EQ(add(5, 10), 15);
	cout << "Values Equal\n";
}
*/

TEST(subTest, Test1)
{
	ASSERT_EQ(sub(15, 10), 5);
	cout << "Values Equal\n";
}

int main(int argc, char** argv)
{

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}