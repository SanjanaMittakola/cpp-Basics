/*Create a class Product with private members productName and price. 
Derive a class DiscountedProduct to calculate and display the final price after applying a discount.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Product
{
    private:
    string productName;
    int price;
    public:
    void setProductDetails()
    {
        cout<<"Enter your product name :";
        cin>>productName;
        cout<<"Enter your product price :";
        cin>>price;
    }
    void displayProduct()
    {
        cout<<"\n your product name :"<<productName<<endl;
        cout<<" your product price :"<<price<<endl;
    }
        float getPrice() {
        return price;
    }

};
class DiscountedProduct : public Product
{
    private:
    int Discountpercentage,fianlprice;
    public:
    int finalprice()
    {
        int amount=getPrice();
        cout<<"Enter your discount in a product :";
        cin>>Discountpercentage;
        fianlprice=(amount*Discountpercentage)/100;
        displayProduct();
        cout<<" discount in a product :"<<Discountpercentage<<endl;
        cout<<" Total pice after discount :"<<fianlprice<<endl;
    }

};
int main()
{
    DiscountedProduct obj;
    obj.setProductDetails();
    obj.finalprice();
}