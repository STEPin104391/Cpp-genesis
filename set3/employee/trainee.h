#ifndef __TRAINEE_H
#define __TRAINEE_H

#include "employee.h"

class Trainee : public Employee {
  std::string m_track;
  double score;
  public:
  Trainee(std::string id, std::string name, double salary,int exp,std::string trackcode,double score);
  void payroll();
  void appraisal();
  void display();
};

#endif

