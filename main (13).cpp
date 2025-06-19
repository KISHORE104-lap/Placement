#include <iostream>
using namespace std;
int main()
{
   int a,b,c,n;
   cin >> a >> n;
   
   for(int i=1;i<=n;i++){
       c=a*i;
       cout << a<<" * "  << i <<" = "<< c << endl;
   }
    
  return 0;
}