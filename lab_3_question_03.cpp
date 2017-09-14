#include <iostream>

using namespace std;
int main() {
float a;
cout << "Enter any no.\n";
cin >> a;
if (a<0)
        cout << "The no. is negative\n";
else if (a>0)
        cout << "The no. is positive\n";
else
        cout << "The no. is zero\n";
return 0;
}
