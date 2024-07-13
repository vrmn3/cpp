//this program swap between parameter values.
#include<iostream>
using namespace std;
void swap ( int &x , int &y);
int main()
{
  int i= 10 , j= 83;
  
  swap( i , j );
  cout<<" i becomes "<< i << "\n";
  cout<<" j brcomes "<< j << "\n";
  return 0;
}

void swap ( int &x , int &y)
{
    int temp = x;
    x = y ;
    y = temp;
}