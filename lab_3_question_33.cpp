#include <iostream>
#include <cmath>
using namespace std;
int main() {


int n,firstDigit;
// This is a program to find the sum of first and last digit of any number.

cout << "Enter any no. ";
cin >> n;

int lastDigit = n%10;


while (n>9)
{
   n=n/10;
}

   firstDigit = n;

  cout << "The sum of first and last digit of the entered no. is " << firstDigit + lastDigit << endl;
return 0;
}
