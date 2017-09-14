#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter any no. between 1-7 : ";
cin >> n;
switch (n)
{
case 1:
      cout << "Day is Sunday\n";
      break;
case 2:
      cout << "Day is Monday\n";
      break;   
case 3:
      cout << "Day is Tuesday\n";
      break;
case 4:
      cout << "Day is Wednesday\n";
      break;   
case 5:
      cout << "Day is Thrusday\n";
      break;
case 6:
      cout << "Day is Friday\n";
      break;   
case 7:
      cout << "Day is Saturday\n";
      break;   
default: 
      cout << "Invalid data! Please try again.\n";
      break;
}
return 0;
}
