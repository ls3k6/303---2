#pragma once
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class Professional: public Employee{
  protected:
    double vacHours = 20;
  public:
    Professional(string n, double s, double v);
    double salaryCalc(); 
    double vacCalc();
    double healthCalc();
    void print();
};
