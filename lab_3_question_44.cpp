#include <iostream>

using namespace std;
int main() {

int n,factorial;

cout << "Enter any integer \n";
cin >> n;

cout << "n! = ";

for (factorial=1;n>1;n--)
  {
     factorial = factorial*n;
  }

cout << factorial << endl;

return 0;
}
