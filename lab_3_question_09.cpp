#include <iostream>
#include <cmath>
using namespace std;
int main() {

char ch;
cout << "Enter any character\n";
cin >> ch;
if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
    cout << ch << " is an alphabet\n" ;
else if ( ch >= '0' && ch <= '9')
    cout << ch << " is a digit\n" ;
else 
    cout << ch << " is a special character\n" ;

return 0;
}
