#include <iostream>
#include <cmath>
using namespace std;

int n,i ;
bool isPrime = true;
 
int prime_function()
  {
   for (i=2; i<=n/2; i++)
     {
        if (n%i == 0)
         {
           isPrime=false;
           break;
          }
      }
   return isPrime;
 }

int main () {
       cout << "Enter any no.\n";
       cin >> n;

       prime_function();
      
      if (isPrime)
           cout << n << " is a prime no.\n";
      else 
           cout << n << " is not a prime no.\n";



return 0;
}
