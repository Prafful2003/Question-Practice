#include<iostream>
using namespace std;
int main()
{
	int s;
	int w[s],e=0,odd=0;
	cout<<"Enter number of soldiers :";
	cin>>s;
	for (int i=0; i<s; i++)
	{
	   cin>>w[i];
	  if (w[i]%2==0)
	  {
	  e++;
	  }
	  else 
	  {
	   odd++;
	  }
	}
	if (e>odd)
	{
	    cout<<"you are Ready";
	}
	else
	{
	    cout<<"Not Ready";
	}
	    
	
	
	return 0;
}