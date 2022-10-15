#include<iostream>
#include<string>
using namespace std;
void sfunc (string s)
{
	int upper=0;
	int lower=0;
	int digits=0;
	int special=0;
	for (int i=0; i<s.length(); i++)
	{
		if (s[i]>='A'&& s[i]<='Z')
		{
			upper++;
		}
		else if (s[i]>='a'&& s[i]<='z')
		{
			lower++;
		}
		else if (s[i]>=0 && s[i]<=9)
		{
			digits++;
		}
		else 
		{
			special++;
		}
	}
	cout<<"Upper="<<upper<<endl;
	cout<<"Lower="<<lower<<endl;
	cout<<"Digits="<<digits<<endl;
	cout<<"Special="<<special<<endl;
}

int main()
{
 string s;
 cout<<"Enter a string "<<endl;
 cin>>s;
 sfunc(s);
 	
	return 0;
}
