#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <string>
#include <iostream>

class Account
{
    int customer_id;
    std::string customer_name;
    double balance;
    int regph_no;
    public:
    Account();
    Account(int,std::string,double,int);
    int getcustomer_id() const;
    std::string getcustomer_name() const;
    double getbalance() const;
    int getph_no() const;
    void display() const;
};
#endif
