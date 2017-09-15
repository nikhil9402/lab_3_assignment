#include <iostream>
#include <cmath>
using namespace std;
int main() {

int n,i;

cout << "Enter the value of n :\n";
cin >> n;

cout << "First "<< n <<" natural nos. in reverse order are ";

i=n;

while (i>=1)
{
   cout << endl << i ;

   i--;
}
cout << endl;

return 0;
}
