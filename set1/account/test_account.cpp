#include "account.h"
#include <gtest/gtest.h>

TEST(Account, DefaultConstructor) 
{
  Account a1;
  EXPECT_EQ(0.0, a1.getBalance());
}

TEST(Account, ParameterizedConstructor) 
{
  Account a1("100", "Naveen", 500.0);
  EXPECT_EQ(500.0, a1.getBalance());
}

TEST(Account, CopyConstructor) 
{
  Account a1("100", "Naveen", 500.0);
  Account a2(a1);
  EXPECT_EQ(500.0, a2.getBalance());
}

TEST(Account, Credit) 
{
  Account a1("100", "Naveen", 500.0);
  a1.credit(400);
  EXPECT_EQ(900.0, a1.getBalance());
}

TEST(Account, Debit) 
{
  Account a1("100", "Naveen", 500.0);
  a1.debit(200);
  EXPECT_EQ(300.0, a1.getBalance());
}

TEST(Account, Transaction) 
{
  Account a1("100", "Naveen", 500.0);
  a1.debit(100);
  a1.credit(100);
  a1.credit(100);
  EXPECT_EQ(600.0, a1.getBalance());
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
