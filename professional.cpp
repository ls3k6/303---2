#include "professional.h"

Professional::Professional(string n, double s, double v){
      name = n;
      sal = s;
      hrsWorked = v;
    }

    double Professional::salaryCalc(){ return sal/4; }
    double Professional::vacCalc(){ return vacHours; }
    double Professional::healthCalc(){ return sal/20; }

    void Professional::print(){
      cout << "\nEmployee: " << name << endl;
      cout << "Hours Worked: " << hrsWorked << endl;
      cout << "Weekly Salary: $" << salaryCalc() << endl;
      cout << "Vacation Hours Accumulated: " << vacCalc() << endl;
      cout << "Health Care Payments: $" << healthCalc() << endl << endl;
    }
