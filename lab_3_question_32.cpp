#include <iostream>

using namespace std;
int main() {

float n;
int no;
// This is program to find first and last digit of any number.

cout << "Enter any no. ";
cin >> n;


while (n>9)
{
   n=n/10;
}

   no=n;
cout << "Last digit of the entered number is " << no;

return 0;
}
