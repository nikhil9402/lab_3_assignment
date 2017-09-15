#include <iostream>

using namespace std;
int main() {

int n,i=1,sum=0;

cout << "Enter the value of n :\n";
cin >> n;

cout << "Sum of all natural nos. between 1 to "<< n << " is ";

while (i<=n)
{
   sum = sum+i;

   i++;
}
cout << sum << endl;
return 0;
}
