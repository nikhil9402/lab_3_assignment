#include <iostream>
#include <cmath>
using namespace std;
int main() {
float a,b,c;
cout << "Enter lengths of three sides of a triangle:\n";
cin >> a >> b >> c;
if ( a == b && b == c )
    cout << "The triangle is equilateral.\n";
else if (a!=b && b!=c)
    cout << "The triangle is scalane.\n";
else
    cout << "The triangle is isosceles.\n";
return 0;
}
