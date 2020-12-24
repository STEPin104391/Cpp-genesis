#ifndef __BANKING_H
#define __BANKING_H

#include "Account.h"
#include<list>

class Banking
{
    std::list<Account> account;
    public:
    void addAccount(int,std::string,double,int);
    void removeAccountbytid(int);
    void displayall();
    double averagebalance();
    Account* findaccountbyid(int);
    Account& maximumbalance();
    int rangebalance(double,double);
};
#endif
