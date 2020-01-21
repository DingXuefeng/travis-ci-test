#include <gtest/gtest.h>
#include "lib.h"

TEST(Addition, CanAddTwoNumbers) {
  EXPECT_TRUE(add(2, 2) == 4);
}
