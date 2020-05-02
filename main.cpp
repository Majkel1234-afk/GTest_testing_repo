#include <gtest/gtest.h>
#include "functions.hpp"

int main(int argc, char** argv)
{
	mainFunction();
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
