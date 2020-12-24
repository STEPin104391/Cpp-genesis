#include "Banking.h"

  void Banking::addAccount(int customer_id,std::string customer_name,double balance,int regph_no)
  {
      account.push_back(Account(customer_id,customer_name,balance,regph_no));
  }
  void Banking::removeAccountbytid(int customer_id)
  {
      std::list<Account>::iterator iter;
      iter=account.begin();
      for(;iter!=account.end();++iter)
        if(iter->getcustomer_id()==customer_id)
           break;
       if(iter!=account.end())
         account.erase(iter);
  }
  void Banking::displayall()
  {
      std::list<Account>::iterator iter;
      for(iter=account.begin(); iter!=account.end(); ++iter)
         iter->display();
  }
  Account* Banking::findaccountbyid(int customer_id)
  {
       std::list<Account>::iterator iter;
      for(iter = account.begin();iter!=account.end();iter++)
      {
           if(iter->getcustomer_id()==customer_id)
              return &(*iter);
      }
     return nullptr;
  }

  double Banking::averagebalance()
  {
       std::list<Account>::iterator iter;
  double totalPrice=0;
  for(iter=account.begin(); iter!=account.end(); ++iter)
     totalPrice += iter->getbalance();
  return totalPrice/account.size();
  }

  Account& Banking::maximumbalance()
  {
       std::list<Account>::iterator iter;
       double MAX_balance=0;
       iter=account.begin();
       auto maxiter=iter;
       for(;iter!=account.end();++iter)
        if(iter->getbalance()>MAX_balance)
        {
            MAX_balance=iter->getbalance();
            maxiter=iter;
        }

     return *maxiter;
  }
  int Banking::rangebalance(double minval,double maxval)
  {
      std::list<Account>::iterator iter;
      int count1=0;
      for(iter=account.begin();iter!=account.end();iter++)
        if(iter->getbalance()>=minval&&iter->getbalance()<=maxval)
           count1+=1;
    return count1;
  }

  int main()
  {
      Banking b;
      b.addAccount(1,"Naveen",10000.00,123456);
      b.addAccount(2,"Naveen kumar",10000.00,123457);
      b.addAccount(3,"Sudheesh",11000.00,123458);
      b.displayall();
      b.removeAccountbytid(123456);
      b.displayall();
      b.findaccountbyid(123457);
      std::cout<<"average:"<<b.averagebalance();
      b.maximumbalance();
      b.rangebalance(10000,12000);
  }