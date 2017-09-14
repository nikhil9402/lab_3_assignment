#include <iostream>
#include <cmath>
using namespace std;
int main() {
float sp,cp;

cout << "Enter cost price and selling price respectively:\n";
cin >> cp >> sp;

if (sp > cp)
   cout << "Profit = " << sp-cp << endl ;
else if (sp < cp)
   cout << "Loss = " << cp-sp << endl ;
else
   cout << "No profit no loss.\n";
return 0;
}
