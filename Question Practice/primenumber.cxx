#include<iostream>
using namespace std;

int main()
{
    int x,f=0;
    cin>>x;
    for(int i=1;i<=x;i++)
    
        if(x%i==0)
    
        {
            f++;
        }
   if(f<=2)
   {
       cout<<"prime no";
   }
   else
   {
   cout<<"not prime no";
       
   }
    return 0;
}