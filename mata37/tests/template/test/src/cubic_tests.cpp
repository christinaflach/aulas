#include <iostream>
#include "cubic.h"
#include "gtest/gtest.h"

namespace {

class CubicTest : public ::testing::Test {
 // protected:
  // CubicTest() { }
  // void SetUp() override {}
  // void TearDown() override {}

};

TEST(CubicTest, HandlesZero) {
     EXPECT_EQ(cubic(0), 0.0);
} 

TEST(CubicTest, HandlesPositive) {
     EXPECT_EQ(cubic(3), 27.0);
}

TEST(CubicTest, HandlesLarge) {
     EXPECT_EQ(cubic(10),1000.0);
}

}

