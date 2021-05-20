#include <iostream>






 int main ()
 {
     extern  int a ;
     extern  int b ;
     extern  int c ;
     extern   float d ;
     float itog = 0;

     itog = a * (b+(c/d));

    std:: cout << " itog = " << itog  <<std::endl;




     return 0;
 }
