#include <iostream>
#include <cmath>
using namespace std;
int main() {


// This is a program to find the reverse of any number.

long n, reversedNumber=0 ,remainder;

cout << "Enter any integer \n";
cin >> n;


while (n > 0)
{   
   remainder = n%10;
   reversedNumber = reversedNumber * 10 + remainder;
   n = n/10;
}

    cout << "Reverse of entered integer"  << " = " << reversedNumber <<endl;
return 0;
}
