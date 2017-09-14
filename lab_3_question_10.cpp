#include <iostream>
#include <cmath>
using namespace std;
int main() {
char ch;
cout << "Enter any character\n";
cin >> ch;
if ( ch >= 'a' && ch <= 'z' )
    cout << "'" << ch << "' is a lowercase alphabet.\n" ;
else if ( ch >= 'A' && ch <= 'Z' )
    cout << "'" << ch << "' is an uppercase alphabet.\n" ;

return 0;
}
