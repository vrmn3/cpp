//this program to calculate and print the average of grades 6 students 
#include <iostream>
using namespace std;
int main ()
{

int grade , counter =1 , sum =0;
do
{
cout<< counter << " \n enter your student grade \t";
cin>> grade;
sum += grade ;
counter++;
}
while ( counter <= 6); // Here we should put semicolon

cout <<" sum is = \n"<< sum ;

    return 0;
}