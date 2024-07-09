// this program to calculate and print the average of grades 6 students
#include <iostream>
using namespace std;
int main ()
{

int grade,sum = 0;
for( int counter = 1 ; counter <= 6 ; counter++)
{
cout << counter << " enter your student grade \n";
cin >> grade;
sum += grade;
}
cout <<" the average of numbers = \n" << sum/6;
    return 0;
}