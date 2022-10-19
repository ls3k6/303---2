#include <iostream>
#include "employee.h"
#include "nonproffesional.h"
#include "professional.h"
using namespace std;

int main() {
  Professional p1("Jane Doe", 8180, 40);
  p1.print();
  
  Nonpros w1("Billy Bob", 20, 24);
  w1.print();
}
