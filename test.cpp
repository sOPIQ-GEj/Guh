#include "pch.h"
#include "C:\Users\Пользователь\source\repos\ConsoleApplication1\Guh.cpp"
#include <vector>

TEST(CaseGuh, Test1) {
	std::vector<int> nums(10, 1);
	nums = guh(9, nums);
	for (int i = 0; i < nums.size(); i++) {
		ASSERT_EQ(nums[i], 10);
	}
	ASSERT_EQ(guh(10, nums).size(), nums.size());
}

TEST(CaseGuh, Test2) {
	std::vector<int> nums(10, 10);
	nums = guh(-10, nums);
	for (int i = 0; i < nums.size(); i++) {
		ASSERT_EQ(nums[i], 0);
	}
	ASSERT_EQ(guh(10, nums).size(), nums.size());
}

TEST(CaseGuh, Test3) {
	std::vector<int> nums(10);
	for (int i = 0; i < nums.size(); i++) {
		ASSERT_EQ(guh(10, nums)[i], 10 * (i + 1));
	}
	ASSERT_EQ(guh(10, nums).size(), nums.size());
}

TEST(CaseGuh, Test4) {
	std::vector<int> nums;
	ASSERT_EQ(guh(10, nums).size(), nums.size());
}