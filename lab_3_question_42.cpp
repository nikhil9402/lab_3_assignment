#include <iostream>

using namespace std;
int main() {

int base, exp, pow=1;

cout << "Enter base and exponent respectively\n";
cin >> base >> exp;

cout << base << "^" << exp << " = " ;

for (pow=1;exp!=0;exp--)
  {
   pow = pow*base;
  }

cout << pow << endl;
return 0;
}
