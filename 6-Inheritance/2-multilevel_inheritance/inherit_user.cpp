/*Create a class User to store basic user details, and extend it with Customer and then OnlineCustomer. 
The final class calculates the total bill using cart value and delivery charges.*/
#include<iostream>
#include<conio.h>
using namespace std;
class user
{
    private:
    int mobileno;
    string name;
    public:
    void setuserdetail()
    {
        cout<<"Enter user name :";
        cin>>name;
        cout<<"Enetr user mobile no : ";
        cin>>mobileno;
    }
    void displayuserdetail()
    {
        cout<<"\n";
        cout<<" user name :"<<name<<endl;
        cout<<" user mobile no : "<<mobileno<<endl;

    }
};
class customer :public user
{
    private:
    string add;
    int id;
    public:
    void setcustomerdetail()
    {
        cout<<"Enter customer address :";
        cin>>add;
        cout<<"Enter customer id : ";
        cin>>id;
        

    }
    void displaycustomerdetail()
    {
        displayuserdetail();
        cout<<"Enter customer address :"<<add<<endl;
        cout<<"Enter customer id : "<<id<<endl;

    }

};
class OnlineCustomer : public customer
{
    private:
    int cartvalue,dilivercharge,total;
    public:
    void calculatebill()
    {
        cout<<"Enter customer cart value :";
        cin>>cartvalue;
        cout<<"Enter customer diliver charge : ";
        cin>>dilivercharge;
        total=cartvalue+dilivercharge;
        displaycustomerdetail();
        cout<<" customer total bill is :"<<total<<endl;
    }

};
int main()
{
    OnlineCustomer obj;
    obj.setuserdetail();
    obj.setcustomerdetail();
    obj.calculatebill();
}