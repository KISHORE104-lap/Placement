#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float item_1,item_2,discount;
    cout<<"Enter the price of item_1: "<<endl;
    cin>>item_1;
    cout<<"Enter the price of item_2: "<<endl;
    cin>>item_2;
    cout<<"Enter the discount: "<<endl;
    cin>>discount;
    
    int total = item_1+item_2;
    float discounted = (total*discount/100);//discounted=65.85-(65.85*0.1)=59.265
    float saving = total - discounted;//65.85-59.265=6.585
    cout<<fixed<<setprecision(2);
    cout<<item_1+item_2<<endl;
    cout<<saving<<endl;
    cout<<discounted;
}

