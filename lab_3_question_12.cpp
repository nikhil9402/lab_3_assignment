#include <iostream>
using namespace std;
int main() {
int m;
cout << "Enter any month no. between 1 to 12:\n";
cin>> m;
switch (m)
{
case 1:
   cout << "In january there are 31 days.\n";
   break;
case 2:
   cout << "In february there are 28/29 days.\n";
   break;
case 3:
   cout << "In march there are 31 days.\n";
   break;
case 4:
   cout << "In april there are 30 days.\n";
   break;
case 5:
   cout << "In may there are 31 days.\n";
   break;
case 6:
   cout << "In june there are 30 days.\n";
   break;
case 7:
   cout << "In july there are 31 days.\n";
   break;
case 8:
   cout << "In august there are 31 days.\n";
   break;
case 9:
   cout << "In september there are 30 days.\n";
   break;
case 10:
   cout << "In october there are 31 days.\n";
   break;
case 11:
   cout << "In november there are 30 days.\n";
   break;
case 12:
   cout << "In december there are 31 days.\n";
   break;
default:
   cout << "Invalid input! Try again."; 
}
return 0;
}
