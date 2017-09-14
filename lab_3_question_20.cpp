#include <iostream>
#include <cmath>
using namespace std;
int main() {

float basicSalary, HRA, DA;

cout << "Enter basic salary of the employee:\n";
cin >> basicSalary;

if (basicSalary <= 10000)
 {
   HRA = 0.2*basicSalary;
   DA = 0.8*basicSalary;
   cout << "Gross salary = " << basicSalary+HRA+DA <<endl;
 }

else if (basicSalary <= 20000)
 {
   HRA = 0.25*basicSalary;
   DA = 0.9*basicSalary;
   cout << "Gross salary = " << basicSalary+HRA+DA <<endl;
 }

else 
 {
   HRA = 0.3*basicSalary;
   DA = 0.95*basicSalary;
   cout << "Gross salary = " << basicSalary+HRA+DA <<endl;
 }

return 0;
}
