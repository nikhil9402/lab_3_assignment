#include <iostream>

using namespace std;
int main() {

// This is a program to count number of digits in any number.

int n,i;

cout << "Enter any no. ";
cin >> n;

while (n>0)
 {
    n=n/10;
    i++;
 }

 cout << "Number of digits in the entered number is " << i << endl;

return 0;
}
