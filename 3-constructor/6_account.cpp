/*Write a program to demonstrate the use of a copy constructor in a class Account.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Account
{
    public:
    int balance,number;
    string name;
    public:
    Account(string n,int no,int blc)
    {
        name=n;
        number=no;
        balance=blc;
        cout<<"normal constructor"<<endl;
        cout<<" account holder name:"<<name<<endl;
        cout<<" account number:"<<number<<endl;
        cout<<" account balance:"<<balance<<endl;
    }
    Account(const Account &y)
    {
        name=y.name;
        balance=y.balance;
        number=y.number;
        cout<<"copy constructor"<<endl;
        cout<<" account holder name:"<<name<<endl;
        cout<<" account number:"<<number<<endl;
        cout<<" account balance:"<<balance<<endl;
        
    }  
};
int main()
{
    int balance,number;
    string name;
    cout<<"enter account holder name:";
    cin>>name;
    cout<<"enter account number:";
    cin>>number;
    cout<<"enter account balance:";
    cin>>balance;

    Account obj(name,number,balance); 
    Account o=obj;
}