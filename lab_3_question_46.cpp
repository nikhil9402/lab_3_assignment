#include <iostream>
#include <cmath>
using namespace std;

int a,b,hcf,lcm;

 int hcf_function(int a, int b) {

 while (a != b)
  {
     if (a > b)
        a = a-b;
     else
        b = b-a;
  }
  hcf = a;
 return hcf;
}
int main() {

  cout << "Enter any two nos.\n";
  cin >> a >> b;
   
  hcf_function(a,b);
  lcm = ((a*b)/hcf);
    
 cout << "LCM of " << a << " and " << b << " is " << lcm << endl;

return 0;
}
