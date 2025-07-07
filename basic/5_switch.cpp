/*Create a C++ program using switch-case that converts values between different units based on user choice.
1. Convert Celsius to Fahrenheit
2. Convert Fahrenheit to Celsius
3. Convert Kilometers to Miles
4. Convert Miles to Kilometers
5. Convert Kilograms to Pounds
6. Convert Pounds to Kilograms*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,n;
    float b;
    cout<<"\n1. Convert Celsius to Fahrenheit";
    cout<<"\n2. Convert Fahrenheit to Celsius";
    cout<<"\n3. Convert Kilometers to Miles";
    cout<<"\n4. Convert Miles to Kilometers";
    cout<<"\n5. Convert Kilograms to Pounds";
    cout<<"\n6. Convert Pounds to Kilograms";
    cout<<"\nEnnter your number: ";
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"\n1. Convert Celsius to Fahrenheit";
        cout<<"\nEnter your celsius value: ";
        cin>>a;
        b=(a*9/5)+32;
        cout<<"\nyour Fahrenheit value: "<<b;
        break;
        case 2:
        cout<<"\n2. Convert Fahrenheit to Celsius";
        cout<<"\nEnter your Fahrenheit value: ";
        cin>>a;
        b=(a-32)*5/9;
        cout<<"\nyour Fahrenheit value: "<<b;
        break;
        case 3:
        cout<<"\n3. Convert Kilometers to Miles";
        cout<<"\nEnter your Kilometers value: ";
        cin>>a;
        b=a*0.621371;
        cout<<"\nyour Fahrenheit value: "<<b;
        break;
        case 4:
        cout<<"\n4. Convert Miles to Kilometers";
        cout<<"Enter your Miles value: ";
        cin>>a;
        b=a/0.621371;
        cout<<"\nyour Fahrenheit value: ";
        break;
        case 5:
        cout<<"\n5. Convert Kilograms to Pounds";
        cout<<"Enter your Kilograms value: ";
        cin>>a;
        b=a*2.20462;
        cout<<"\nyour Fahrenheit value: "<<b;
        break;
        case 6:
        cout<<"\n6. Convert Pounds to Kilograms";
        cout<<"Enter your Pounds value: ";
        cin>>a;
        b=a/2.20462;
        cout<<"\nyour Fahrenheit value: "<<b;
        break;
    }
}
