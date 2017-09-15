#include <iostream>
using namespace std;

int main() {

int a,b;

cout << "Enter any two nos.\n";
cin >> a >> b;

while (a != b)
 {
     if (a > b)
        a = a-b;
     else
        b = b-a;
 }

cout << "HCF = " << a << endl;


return 0;
}
