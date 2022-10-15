#include <iostream>
#include<math.h>
using namespace std;
int main()
{
float y,z=0;
int n;
cin>>n;
for (int i=1; i<=n; i++)
{
	y=1/pow(i,i);
	cout<<y<<"+";
	z=z+y;
	
	}
return 0;	
}