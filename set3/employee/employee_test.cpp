#include<gtest/gtest.h>
#include"employee.h"
#include"manager.h"
#include"trainee.h"
#include"engineer.h"
namespace{

TEST(Manager,ManagerAllTests)

    {
        Employee *e;
        Manager m1("001","Naveen",1000,1000,5606,2);
        e=&m1;


        EXPECT_EQ(1000,e->getsal());




    }
   TEST(Engineer,EngineerAllTests)

    {
        Employee *e;
        Engineer m1("100","Naveen",1000,1000,5060);
        e=&m1;


        EXPECT_EQ(1000,e->getsal());




    }
    TEST(Trainee,TraineeAllTests)

    {
        Employee *e;
        Trainee m1("100","Naveen",1000,1000,"A",50);
        e=&m1;


        EXPECT_EQ(1000,e->getsal());




    }

}



