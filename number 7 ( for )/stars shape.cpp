//This program to print stars in a pyramid shape.
#include <iostream>
using namespace std;
int main()
{
  for ( int line = 1 ; line <= 10 ; line++)
  {
    for ( int star = 1 ; star <= line ; star++)
    {
    cout<<"*";
    }
    cout<<" \n ";
  }

    return 0;
}