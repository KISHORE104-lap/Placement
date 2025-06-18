#include<iostream>
#include<iomanip>
using namespace std;
float dis=0.20;
int main()
{
    double pa,in,years,si,intr,amount,discount;
    cout<<"Enter the Principal amount:"<<endl;
    cout<<"Enter the Interest:"<<endl;
    cout<<"Enter the no of years:"<<endl;
    cin>>pa>>in>>years;
    
    intr=in*years;//10.00
    si=(pa*in*years)/100.00;//100
    //discount=si*0.20;//2
    amount=pa+si;//120
    cout<<fixed<<setprecision(4)<<endl;
    cout<<intr<<endl;
    cout<<amount<<endl;
    cout<<dis<<endl;
    cout<<amount-0.20<<endl;
    
}
