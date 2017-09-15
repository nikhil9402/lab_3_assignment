#include <iostream>
#include <cmath>
using namespace std;
int main() {
float a, b, c, M;
cout << "Enter any three nos."<<endl;
cin >> a>>b>>c;
if (a>= b && a>=c )
 {
           M=a;
}
else if (b>= a && b>=c )
 {
           M=b;
}
else if (c>=a && c>=b )
{
           M=c;
}
cout << "Maximum = " << M <<"\n";

return 0;
}
