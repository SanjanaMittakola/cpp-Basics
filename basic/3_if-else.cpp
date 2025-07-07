//take any year from the user and check the year is leap year or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter your year: ";
    cin >>year;
    if((year%100!=0 && year%4==0) || year%4==0)
    {
        cout <<"your year is leap year";
    }
    else{
        cout <<"your year is not a leap year";
    }   
}