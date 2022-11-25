#include "unity.h"
#include "average.h"


void test_AverageThreeBytes_should_AverageMidRangeValues(void)
{
	TEST_ASSERT_EQUAL_HEX8(40, averageThreeBytes(30, 40, 50));
	TEST_ASSERT_EQUAL_HEX8(40, averageThreeBytes(10, 70, 40));
	TEST_ASSERT_EQUAL_HEX8(33, averageThreeBytes(33, 33, 33));
}


void test_AverageThreeBytes_should_AverageHighValues(void)
{
	TEST_ASSERT_EQUAL_HEX8(80, averageThreeBytes(70, 80, 90));
	TEST_ASSERT_EQUAL_HEX8(127, averageThreeBytes(127, 127, 127));
	TEST_ASSERT_EQUAL_HEX8(84, averageThreeBytes(0, 126, 126));
}


int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
	RUN_TEST(test_AverageThreeBytes_should_AverageHighValues);
	return UNITY_END();
}
