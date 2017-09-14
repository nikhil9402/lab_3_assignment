#include <iostream>
#include <cmath>
using namespace std;
int main() {
float a,b,c,disc;
cout << "Enter the coefficients a, b and c of a quadratic equation:\n";
cin >> a >> b>> c;
disc = (b*b) - (4*a*c);

if (disc > 0) 
{
cout << "Roots are real and distinct.\n "<< "x1 = " << ( -b+ sqrt(disc) )/(2*a) << " and "<< "x2 = "<< (-b-sqrt(disc))/(2*a) << endl;
}
else if (disc == 0 )
{
cout << "Roots are real and equal.\n"<< "x1 = x2 = " << ((-b)/(2*a)) << endl ;
}
else
{
cout << "Roots are complex.\n" ;
cout<< "x1 = " << (-b/(2*a)) << " + " << sqrt(-disc)/(2*a)<< "i\n";
cout<< "x2 = " << (-b/(2*a)) << " - " << sqrt(-disc)/(2*a)<< "i\n";
}
return 0;
}
