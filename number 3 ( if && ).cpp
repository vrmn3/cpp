#include <iostream>
using namespace std;
int main ()
{
 /*
  Company conditions for accepting new employees:
  1. married (M) employees : no condition for married employees.
  2. single employees (S) : gender male (M), age 30 and above, or female (F), age 25 and above.
  */
 char marriage , gander;
 int age;

 cout<<" enter your marriage life \n";
 cin>> marriage;

 cout<<" enter your gender \n";
 cin>> gander;

 cout<<" enter your age \n";
 cin >> age;

 if( ( marriage == 'M') || ( marriage == 'S' && gander == 'M' && age >= 30 ) || ( marriage == 'S' && gander == 'F' && age >= 25))
 {
 cout<<"the process is successful \n";
 }
 else 
{
    cout<<"the process is not successful \n";
}

}