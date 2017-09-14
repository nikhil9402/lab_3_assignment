#include <iostream>
#include <cmath>
using namespace std;
int main() {
int A,Two_th,Five_th,Hundred,Fifty,Tens,Two,One ;
cout << "Enter amount of money in rupees:\n";
cin >> A;
Two_th = A/2000;
Five_th = (A%2000)/500;
Hundred = (A%500)/100;
Fifty = (A%100)/50;
Tens = (A%50)/10;
Two = (A%10)/2;
One = (A%2)/1;
cout << "There are " <<Two_th<<" two thousands, " <<Five_th<< " five hundreds, " <<Hundred<< " hundreds, " <<Fifty<< " fifty, " <<Tens<< " tens, " <<Two<< " two and "<<One<< " one.\n";
return 0;
}
