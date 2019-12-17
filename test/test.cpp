#include "gtest/gtest.h"

#include "template/sum.hpp"

TEST(example, test1)
{
  auto result = sum(1, 4);
  ASSERT_EQ(result, 5);
}

TEST(example, test2)
{
  auto result = sum(0, 0);
  ASSERT_EQ(result, 0);
}