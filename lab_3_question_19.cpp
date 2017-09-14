#include <iostream>
#include <cmath>
using namespace std;
int main() {

float p,c,m,b,cs,percentage;

cout << "Enter marks in Physics, Chemistry, Biology, Mathematics and Computer respectively out of 100:\n";
cin >> p >> c >> b >> m >> cs;
percentage = (p+c+b+m+cs)/5;

cout << "Percentage = " << percentage << "%\n";

if (percentage >= 90)
   cout << "Grade A\n"; 
else if (percentage >= 80)
   cout << "Grade B\n"; 
else if (percentage >= 70)
   cout << "Grade C\n"; 
else if (percentage >= 60)
   cout << "Grade D\n"; 
else if (percentage >= 40)
   cout << "Grade E\n"; 
else 
   cout << "Grade F\n"; 
return 0;
}
