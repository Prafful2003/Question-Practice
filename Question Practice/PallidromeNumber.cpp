#include<iostream>
using namespace std;
int main ( )
{
	int n,p,r,m,sum=0;
	cout<<"enter a number";
	cin>>n;
	p=n;
	while (n!=0)
	{
	    r=n%10;
	    sum=sum*10+r;
	    n=n/10;
	}
	if (p==sum)
	{
	    cout<<"Pallindrome number";
	}
	else
	 {
	    cout<<"Not a Pallindrome number";
	 }
	    
}