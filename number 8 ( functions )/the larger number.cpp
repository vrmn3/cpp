//This program ask the user to enter 2 integer numbers and then print the largest of them.
#include<iostream>
using namespace std;
int larger( int num1 , int num2);
int main ()
{
 int n1 , n2 ;
 cout<<" enter 2 numbers \n";
 cin>> n1 >> n2;
 cout<<" the larger number is \t " << larger ( n1 , n2 );
    return 0;
}

int larger ( int num1 , int num2)
{
    if ( num1 >= num2 )
    return num1;

    else
    return num2;
}