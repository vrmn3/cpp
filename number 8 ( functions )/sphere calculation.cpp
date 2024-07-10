/*
This program is to calculate the Area and volume for a sphere.
- The area of sphere = 4 * PI * Radius * Radius.
- The Volume of sphere = 3/4 * PI * Radius * Radius * Radius.
- Note: Pl =3.14
*/
#include <iostream> 
using namespace std;

float area ( int  );
float volume ( int );
int main()
{
  int radius ;
  cout<<" enter the radius \n ";
  cin>> radius ;
  cout<<" the area of sphere = \n " << area (  radius ) << "\n";
  cout<<" the volume of sphere = \n " << volume (  radius ) << "\n";
  return 0;
}

float area ( int r ) 
{
    return 4 * 3.14 * r * r ;
}

float volume ( int r )
{
    return 3/4 * 3.14 * r * r * r ;
}
