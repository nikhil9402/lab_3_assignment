#include <iostream>
using namespace std;
int main () {

int n,a,num,sum;

cout << "Enter any no.\n";
cin >> n;

num = n ;

while (num!=0)
  { 
      a=num%10;
      a=a*a*a;
      sum=sum+a;
      num=num/10;
   }

if (sum==n)
     cout << n << " is an armstrong no.\n";
else 
     cout << n << "is not an armstrong no.\n";


return 0;
}
