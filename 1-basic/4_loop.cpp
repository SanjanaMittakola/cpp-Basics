/*  take any number from the user and check the number is palindrome or not. !*/
#include<iostream>
using namespace std;
int main() {
    int a, b = 0, c;
    cout << "Enter your number: ";
    cin >> a;
    int n = a;  
    while (a > 0) {
        c = a % 10;        
        b = b * 10 + c;     
        a = a / 10;        
    }
    cout << "\nReversed value is: " << b ;
    if(n==b)
    {
        cout<<"\nyour value is palindrome";
    }
    else{
        cout<<"\nyour value is not palindrome";
    }
    return 0;
}