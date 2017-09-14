#include <iostream>
#include <cmath>
using namespace std;
int main() {
int a, b, M;
cout << "Enter any two no."<<endl;
cin >> a>>b;
if (a > b ) {
           M=a;
}
else {
           M=b;
}
cout << "Maximum of a and b is " << M <<"\n";
return 0;
}
