#include<iostream>
using namespace std;
int main()
{
    int stud,teams;
    cout<<"no of students:"<<endl;
    cin>>stud;
    cout<<"no of teams:"<<endl;
    cin>>teams;
    
    cout<<"NO OF TEAMS "<<stud/teams<<endl;
    cout<<"NO OF LEFTOUT "<<stud%teams<<endl;
    
    
}