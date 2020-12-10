#include "pch.h"
namespace FreeServer_TestSuites_UnitTests {
	TEST(SampleTestCaseName, SampleTestName) {
		EXPECT_EQ(1, 1);
		EXPECT_TRUE(true);
	}
	TEST(SampleTestCaseName, SampleTestName2) {
		EXPECT_EQ(2, 2);
		EXPECT_TRUE(true);
	}

	int main(int argc, char** argv) {
		::testing::InitGoogleTest(&argc, argv);
		return RUN_ALL_TESTS();
	}
}