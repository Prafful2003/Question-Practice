#include<iostream>
using namespace std;
int main ()
{
	int t,x,y; 
	cin>>t;
	while (t--)
	{ 
	cin>>x>>y; 
	int z,k;
	if (x>y) {
	z=(x-y);
	} 
	else { 
	z=(y-x); 
	} 
	if ((z%2)==0)
	{ 
	k=(z/2); 
	} 
	else {
   k=(z/1);
	} 
	cout<<k<<endl;
	}
	return 0;
}