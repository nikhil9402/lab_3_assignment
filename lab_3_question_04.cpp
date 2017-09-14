#include <iostream>
#include <cmath>
using namespace std;
int main() {
int num;
cout << "Enter any no.\n";
cin >> num;
if      (num % 5 == 0 && num % 11 == 0)
              cout << num << " is divisible by both 5 and 11\n";
else if (num % 5 == 0 && num % 11 != 0)
              cout << num << " is divisible by 5 but not by 11\n";
else if (num % 5 != 0 && num % 11 == 0)
              cout << num << " is divisible by 11 but not by 5\n";
else
              cout << num << " is neither divisible by 5 nor by 11\n"; 

return 0;
}
