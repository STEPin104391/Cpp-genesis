#include "customer.h"
#include <gtest/gtest.h>

TEST(Customer, credit) 
{
  Customer p1("001", "Naveen", "123456", 100.50);
  EXPECT_EQ(100.50, p1.getBalance());
  p1.credit(200);
  EXPECT_EQ(300.50, p1.getBalance());
}
TEST(Customer, makeCall) 
{
  Customer p1("001", "Naveen", "123456", 100.50);
  EXPECT_EQ(100.50, p1.getBalance());
  p1.makeCall(1.50);
  EXPECT_EQ(99.00, p1.getBalance());
}

TEST(Customer, getBalance)
{
  Customer p1("001", "Naveen", "123456", 10.50);
  EXPECT_EQ(10.50,p1.getBalance());
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
