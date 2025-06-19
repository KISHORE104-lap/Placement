#include<iostream>
using namespace std;
int main()
{
    int n=5;//cin>>n;
    for(int i=0;i<=5;i++)
    if(i!=0)
    {
        hari_1:cout<<i<<" ";
    }
    else{
        i++;
        goto hari_1;
    }
}