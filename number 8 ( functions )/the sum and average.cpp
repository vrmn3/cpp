//This program ask the user to enter 3 integer numbers and then print their sum and average 
#include<iostream>
using namespace std;

int sum( int , int , int);
float average( int , int , int); 
int main()
{
  int n1, n2 ,n3;
  cout<<" enter 3 numbers \n";
  cin>> n1>>n2>>n3;
  cout<<" the sum of numbers = \n"<< sum (n1 ,n2 ,n3) << "\n";
  cout<<" the average of numbers = \n"<< average (n1 ,n2 ,n3) << "\n";

    return 0;
}

int sum( int num1 , int num2 , int num3)
{
  int i;
  i = num1 + num2 + num3;
  return i;

  // or : return num1 + num2 + num3;
}

float average( int num1 , int num2 , int num3) 
{
   int j;
   j = (num1 + num2 + num3) / 3;
   return j;

   // or : return (num1 + num2 + num3) / 3;
}