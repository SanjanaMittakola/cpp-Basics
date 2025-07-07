/*Task 1: Create a Book class
Create a class Book with the following:
Data members: title, author, price
Member function: display() to show the book details
👉 Create two objects of the Book class and display their details.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Book
{
    public:
    string title ;
    string author;
    int price;
    int display();
};
int Book::display()
{
    cout<<"Enter  Book title : ";
    cin>>title;
    cout<<"Enter author name : ";
    cin>>author;
    cout<<"Enter Book price name : ";
    cin>>price;
}
int main()
{
    Book obj;
    obj.display();
    getch();
}