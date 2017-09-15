#include <iostream>

using namespace std;
int main() {
char ch;
cout << "Enter any character\n";
cin >> ch;
if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
    cout << ch << " is an alphabet\n" ;
else 
    cout << ch << " is not an alphabet\n"     ;
return 0;
}
