#include <iostream>

using namespace std;

 int main ()
 
 {
     int a ;
     int b = 21;
     int pr;
     int di;
     int difr  ;
     cout << "Enter number a:" << endl;
     cin >> a;

pr=2*(b-a);
di=(a-b);


difr = (a < b) ?  pr : di;



 cout << "Difference number a and number 21 = " << difr << endl;


return 0;

 }
