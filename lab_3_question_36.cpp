#include <iostream>
#include <cmath>
using namespace std;
int main() {


// This is a program to find the product of digits of any number.

long n, pdt=1;

cout << "Enter any no. \n";
cin >> n;


while (n > 0)
{    
   pdt = pdt * (n%10);
   n = n/10;
}

    cout << "Product of digits of entered number"  << " = " << pdt <<endl;
return 0;
}
