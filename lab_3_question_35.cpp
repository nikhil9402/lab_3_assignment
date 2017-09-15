#include <iostream>
#include <cmath>
using namespace std;
int main() {

// This is a program to find the sum of digits of any number.

int n, sum=0 ;

cout << "Enter any no. \n";
cin >> n;


while (n > 0)
{    
   sum = sum + (n%10);
   n = n/10;
}

    cout << "Sum of digits of entered number"  << " = " << sum <<endl;
return 0;
}
