#include <iostream>
using namespace std;
int main() {
int a;
cout << "Enter any year:\n";
cin >> a;
if ( a % 4 == 0 )
      {
       if (a < 2017) 
            cout << a <<" was a leap year\n";
       else
            cout << a <<" is a leap year\n";   
      }
else
      {
        if (a < 2017)
            cout << a <<" was not a leap year\n";
        else
            cout << a <<" is not a leap year\n";   
      }
return 0;
}
