#include<iostream>
using namespace std;
int main()
{
   int row;
char p='A';
cout<<"enter the number of rows"<<endl;
cin>>row;
  for (int i=1; i<=row; i++)
{
for (int j=1; j<=i; j++)

{
cout<<p;
p++;
}
p='A';
cout<<"\n";
}
    return 0;
}