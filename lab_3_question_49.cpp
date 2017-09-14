#include <iostream>
#include <cmath>
using namespace std;
int main() {

int n,i,j,sum=0;
bool isPrime=1;
 
cout << "Enter any no.\n";
cin >> n;
cout << "Sum of all prime nos. between 1 and " << n << " is ";

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
     if (isPrime){
      sum=sum+j;
      }
    }
 
cout << sum << endl;
return 0;
}
