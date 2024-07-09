//This program calculates the factorial of any positive number entered by the printer.
#include <iostream>
using namespace std;
int main()
{
int number , factorial = 1 ; // I put 1 and not 0 because I will multiplying.
 cout<<" enter positive number \n";
 cin>> number ;
if ( number < 0)
{
 cout<<" The process not successful (you entered incorrect number) \n";
}
else
 for ( int i = 1 ; i <= number ; ++i)
 factorial += i ;
 cout<<" factorial = \n " << factorial ;


    return 0;
}