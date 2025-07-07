/*Create a class ATM with private members: accountNumber, pin, and balance. 
Add public methods to check balance, deposit, and withdraw — 
ensuring access is only through these methods using PIN verification.*/

#include<iostream>
#include<conio.h>
using namespace std;
class ATM
{
    private:
    int accountNumber,pin,balance;
    public:
    int depos,draw,value;
    public:
    void setdetail()
    {
        cout<<"Enter your Account number :";
        cin>>accountNumber;
        cout<<"Enter your Account pin :";
        cin>>pin;
        cout<<"Enter your Account balance :";
        cin>>balance;
    }
    bool verifyPIN(int enteredPin) 
    {
        return pin == enteredPin;
    }
    void deposit(int amount)
    {
        balance=balance+amount;
        cout<<"Succesfully added youe amount"<<endl;
    }
    void withdraw(int amount)
    {
        if(amount<=balance)
        {
            balance=balance-amount;
            cout<<"Succesfully withdraw your amount"<<endl;
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }
    }
    void check_blc()
    {
        cout<<"your current balance is :"<<balance<<endl;
    }
};
int main()
{
    int value;
    int amount,pinTry;
    ATM obj;
    obj.setdetail();
    cout << "\nEnter PIN to access your account: ";
    cin >> pinTry;
    if (!obj.verifyPIN(pinTry)) 
    {
        cout << "Incorrect PIN. Access Denied.\n";
        return 0;
    }
    while(true)
    {
        cout<<"Enter 1 for Deposit "<<endl;
        cout<<"Enter 2 for Withdraw "<<endl;
        cout<<"Enter 3 for Check Balance "<<endl;
        cout<<"Enter 0 for close account "<<endl;
        cout<<"Enter your value :";
        cin>>value;
        switch(value)
        {
            case 1:
            cout<<"Enter your amount to deposit : ";
            cin>>amount;
            obj.deposit(amount);
            break;
            case 2:
            cout<<"Enter your amount to withdraw : ";
            cin>>amount;
            obj.withdraw(amount);
            break;
            case 3:
            obj.check_blc();
            break;
            case 0:
            cout<<"Thank you for using ATM ";
            return 0;
            break;
            default:
            cout<<"invalid choise";
        }
    }
}
    

    
