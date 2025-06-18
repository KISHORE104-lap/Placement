#include<iostream>
using namespace std;
int main()
{
    int num,fnum,snum;
    cout<<"Enter the number: ";
    cin>>num;
    
    fnum=num/10;
    snum=num%10;
    
    num=fnum+snum;
    cout<<"the number is: "<<num<<endl;
}