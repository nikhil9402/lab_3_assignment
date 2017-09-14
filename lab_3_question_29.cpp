#include <iostream>
#include <cmath>
using namespace std;
int main() {

int i=1, sum=0, n;

cout << "Enter the value of n\n";
cin >> n;

while (i<=n)
  {
    sum = sum+i;

    i+=2 ; 
  }
cout << "The sum of odd nos. between 1 and n = " << sum << endl;

return 0;
}
