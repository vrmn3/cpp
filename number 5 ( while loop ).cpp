// this program to calculate and print the average of grades 6 students 
#include <iostream>
using namespace std;
int main () 
{

int grade , counter = 1 , sum = 0;
while ( counter <= 6)
{
cout<< counter << "\t enter you student grade \n";
cin>> grade;
sum += grade;
counter++;
}

cout<< " the average is = \n" << sum / 6;

    return 0;
}