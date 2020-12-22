#include "bank.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"
#include <gtest/gtest.h>

TEST(SavingsAccount, Credit)
{
    SavingsAccount s1("001", "Naveen" , 500);
    s1.credit(100);
    EXPECT_EQ(600,s1.getBalance());
}

TEST(SavingsAccount, Debit)
{
    SavingsAccount s1("001", "Naveen" , 1100);
    s1.debit(500);
    EXPECT_EQ(600,s1.getBalance());
}

TEST(CreditAccount, Credit)
{
    CreditAccount s1("001", "Naveen" , 600.10);
    s1.credit(100);
    EXPECT_EQ(700.10,s1.getBalance());
}

TEST(CreditAccount, Debit)
{
    CreditAccount s1("001", "Naveen" , 500);
    s1.debit(100);
    EXPECT_EQ(400,s1.getBalance());
}
