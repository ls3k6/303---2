#pragma once
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class Nonpros: public Employee{
  public:
    Nonpros(string n, double s, double v);
    double salaryCalc();
    double vacCalc();
    double healthCalc();
    void print();
