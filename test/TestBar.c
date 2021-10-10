#include "bar.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Bar);

TEST_SETUP(Bar)
{
}

TEST_TEAR_DOWN(Bar)
{
}

int values[] = { 40, 10, 100, 90, 20, 25 };
int expected[] = { 10, 20, 25, 40, 90, 100 };
int n = 6;

TEST(Bar, TestBar1)
{
  sort(values, n);
  TEST_ASSERT_EQUAL_INT_ARRAY (expected, values, n);
}
