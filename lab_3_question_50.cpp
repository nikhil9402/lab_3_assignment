#include <iostream>
#include <cmath>
using namespace std;

int i,j,k,n;
bool isPrime;
int factor_function(){
   for (j=1;j<=n;j++)
      {
         if (n%k==0){
           return j;
           }
      }
   }

int prime_function(){
     for (j=2;j<=n;j++) {
       bool isPrime=1;
       for (i=2;i<j;i++){
           if (j%i==0){
             isPrime=0;
             break;
            }
          }
         }
      if (isPrime)
       return j;
   }
           
    

int main() {
    cout << "Enter any no.\n";
    cin >> n;
    cout << "Prime factors of " << n << " are \n";

    factor_function();
    prime_function();
    
    cout << j << endl;
return 0;
}
