#include<iostream>
using namespace std;
int sun=100;
int main()
{
    int w,x,y,profit;
    cout<<"no of paper sold:"<<endl;
    cin>>w;
    cout<<"cost per paper:"<<endl;
    cin>>x;
    cout<<"company spends per copy:"<<endl;
    cin>>y;
    
    profit=w*x-sun;
    profit=profit-y*w;
    
    cout<<"profit is: "<<profit<<endl;
   
    
    
}