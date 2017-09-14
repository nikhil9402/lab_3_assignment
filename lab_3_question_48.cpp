#include <iostream>

using namespace std;

int main(){

int n,i,j ;
bool isPrime=1;
 
cout << "Enter any no.\n";
cin >> n;
cout << "All prime nos. between 1 and " << n << " are:\n";

for (j=2;j<=n;j++)
   {   //print all prime nos. batween 1 and n
	isPrime = 1;
      for (i=2;i<j;i++)
         {    //Checks whether the no. is prime or not
            if (j%i==0) {
              isPrime = 0;
              break;
             }
         }
      if (isPrime)  {
      cout << j << endl;
       }  
    }

return 0;
}
