#include <iostream>
#include <cmath>
using namespace std;
int main() {


// This is a program to find whether the number is palindrome or not.

long n, reversedNumber=0, remainder, num;

cout << "Enter any integer \n";
cin >> n;

num = n;

while (n > 0)
{   
   remainder = n%10;
   reversedNumber = reversedNumber * 10 + remainder;
   n = n/10;
}

if (num == reversedNumber)
    cout << "The entered integer is a palindrome." << endl;
else 
    cout << "The entered integer is not a palindrome." << endl;
return 0;
}
