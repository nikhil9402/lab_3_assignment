#include <iostream>
#include <cmath>
using namespace std;
int main() {
float a,b,c;
cout << "Enter lengths of three sides of a triangle:\n";
cin >> a >> b >> c;
if ( a+b>c && b+c>a && c+a>b )
     cout << "The three lengths forms sides of a triangle.\n";
else
     cout << "The three lengths does not forms sides of a triangle.\n";
return 0;
}
