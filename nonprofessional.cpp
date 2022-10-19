#include "nonproffesional.h"

Nonpros::Nonpros(string n, double s, double v){
      name = n;
      sal = s;
      hrsWorked = v;
    }

    double Nonpros::salaryCalc(){ return sal*hrsWorked; }
    double Nonpros::vacCalc(){ return hrsWorked/200*5; }
    double Nonpros::healthCalc(){ return sal/100; }

    void Nonpros::print(){
      cout << "Employee: " << name << endl;
      cout << "Hours Worked: " << hrsWorked << endl;
      cout << "Weekly Salary: $" << salaryCalc() << endl;
      cout << "Vacation Hours Accumulated: " << vacCalc() << endl;
      cout << "Health Care Payments: $" << healthCalc();
      cout << endl << endl;
    }
