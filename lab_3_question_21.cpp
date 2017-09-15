#include <iostream>
#include <cmath>
using namespace std;
int main() {

float units,bill ;

cout << "Enter electricity units consumed \n";
cin >> units ,bill;

if (units <= 50)
 {
    bill = (units*0.5);
 }

else if (units <= 150)
 {
    bill = (50*0.5) + ((units-50)*0.75);
 }

else if (units <= 250)
 {
    bill = (50*0.5) + (100*0.75) + ((units-150)*1.2);
 }

else
 {
    bill = (50*0.5) + (100*0.75) + (100*1.2) + ((units-250)*1.5);
 }

        cout << "Total bill = Rs " << bill + (0.2*bill) <<endl;

return 0;
}
