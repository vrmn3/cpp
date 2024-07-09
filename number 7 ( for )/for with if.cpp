//this program takes 10 numbers from the user and prints the sum of the even numbers and the odd numbers.
#include <iostream>
using namespace std;
int main()
{
 int number , sumeven = 0 , sumodd = 0;
for( int i = 1 ; i <= 10 ; i++)
{
 cout << " enter number \n ";
 cin >> number;
if ( number %2 == 0 )
 sumeven += number ;

else
sumodd += number ;
}

cout<<" the sum of even number is = \n" << sumeven << "\n";
cout<<" the sum of odd number is = \n" << sumodd << "\n";
    return 0;
}
