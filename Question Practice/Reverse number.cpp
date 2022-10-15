#include<iostream>
using namespace std; 
int main ( )
{
	int m,t,add=0;
	cout<<"Enter a number ";
	cin>>m;
	while (m!=0)
	{
	    t=m%10;
	    add=add*10+t;
	    m=m/10;
	}
	cout<<"Reverse a number "<<add;
	return 0;
}