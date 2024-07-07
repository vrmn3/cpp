#include <iostream>
using namespace std;
int main ()
{

int grade;
cout<< "enter your grade \n";
cin>> grade;

switch ( grade )
{
case 90 :
cout<<" you got A \n";
break;

case 80 :
cout<<" you got B \n";
break;

case 70 :
cout<<" you got C \n";
break;

case 60 :
cout<<" you got D \n";
break;

default :
cout<<" you got F, sorry for you \n";
}

return 0;
}