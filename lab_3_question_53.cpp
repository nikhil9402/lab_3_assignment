#include <iostream>
using namespace std;

int main () {

int n,i,num,sum=0;

cout << "Enter any no.\n";
cin >> n;

num = n ;

for (i=1;i<n;i++)
  {
       if (n%i==0) {
            sum=sum+i;
          }
   }
 
if (sum==num)     
    cout << num << " is a perfect no.\n ";
else 
    cout << num << " is not a perfect no.\n ";

return 0;
}
