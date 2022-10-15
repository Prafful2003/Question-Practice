#include<iostream>
using namespace std;
int main ()
{
	int t,x,y,p,q; 
	cin>>t; 
	while (t--)
	{ 
	cin>>x>>p>>y>>q;
	int k,m;  
	if (x<p) { 
	k=p; 
	} 
	else { 
	k=x; 
	} 
	if (y<q) { 
	m=q; 
	} 
	else { 
	m=y;
	}
	if (k<m) { 
	cout<<"P"<<endl; 
	} 
	else if(m<k) { 
	cout<<"Q"<<endl; 
	}
	else   { 
	cout<<"TIE"<<endl; 
	} 
	}
	return 0;
}