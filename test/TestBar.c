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
int n = 1;

TEST(Bar, TestBar1)
{
  sort(values, n);
  TEST_ASSERT_EQUAL_INT_ARRAY (expected, values, n);
}

TEST(Bar, TestBar2)
{
  int size = sizeof(values) / sizeof(int);
  TEST_ASSERT_EQUAL_INT (size, n);
}

TEST(Bar, TestBar3)
{
  sort(values, n);
  int size = sizeof(values) / sizeof(int);
  TEST_ASSERT_EQUAL_INT (size, n);
}

TEST(Bar, TestBar4)
{
  sort(values, n);
  int size = sizeof(values) / sizeof(int);
  TEST_ASSERT_GREATER_THAN (0, n);
}

TEST(Bar, TestBar5)
{
  int size = sizeof(values) / sizeof(int);
  TEST_ASSERT_GREATER_THAN (0, size);
}

TEST(Bar, TestBar6)
{
  sort(values, n);
  int size = sizeof(values) / sizeof(int);
  TEST_ASSERT_GREATER_THAN (0, size);
}