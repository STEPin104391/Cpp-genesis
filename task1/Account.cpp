#include "Account.h"

 int customer_id;
    std::string customer_name;
    double balance;
    int regph_no;

    Account::Account():customer_id(0),customer_name(""),balance(0.0),regph_no(0)
    {
    }

    Account::Account(int customer_id,std::string customer_name,double balance,int regph_no):customer_id(customer_id),customer_name(customer_name),balance(balance),regph_no(regph_no)
    {
    }

    int Account::getcustomer_id() const
    {
        return customer_id;
    }

    std::string Account::getcustomer_name() const
    {
        return customer_name;
    }

    double Account::getbalance() const
    {
        return balance;
    }

    int Account::getph_no() const
    {
        return regph_no;
    }

    void Account::display() const
    {
        std::cout<<"\ncustomer_id:"<<customer_id
            <<"\ncustomer_name:"<<customer_name
            <<"\nbalance:"<<balance
            <<"\nregistered_mobile_Number:"<<regph_no<<std::endl;
    }
