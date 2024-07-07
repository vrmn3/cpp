#include <iostream>
using namespace std;
int main ()
{

int grade;
cout<< "enter your grade \n";
cin>> grade;

if( grade >= 90 )
{ 
cout<<" you got A \n";
}

else if ( grade >= 80)
{
cout<<" you got B \n";
}

else if ( grade >= 70 )
{
    cout<<" you got C \n";
}

else if ( grade >= 60)
{
    cout<<" you got D \n";
}

else 
{
    cout<<" you got F, sorry for you \n";
}


}