#include <iostream>
#include <cmath>
using namespace std;
int main() {
float A,B,C;
cout << "Enter three angles of a triangle :\n";
cin >> A >> B >> C;
if (A+B+C == 180)
   cout << "The three angles forms a triangle.\n";
else 
   cout << "The three angles does not forms a triangle.\n";
return 0;
}
