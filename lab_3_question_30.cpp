#include <iostream>
#include <cmath>
using namespace std;
int main() {

int i,n,table;

//This program prints multiplication table of any natural no. n

cout << "Enter the value of n : ";
cin >> n ;

for (i=1;i<=10;i++)
{ 
    table= n*i;
    cout << n << "*" << i << "=" << table << endl;
    
}

return 0;
}
