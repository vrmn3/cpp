//This program to calculates the factorial from 1 to 10.
#include <iostream>
using namespace std;
int main()
{
 int factorial =1 ;
 for ( int num = 1 ; num <= 10 ; num++)
 {
    for ( int i = 1 ; i <= num ; i++)
    factorial += i ;
   cout<<" the factorial of \t " << num << " is = \n " << factorial ;
 }


 return 0;
}
