#include<iostream>
using namespace std;
int main()
{
int ab[3][3],bc[3][3],i,j;
for (int i=0; i<3; i++)
{
for (int j=0; j<3; j++)
{
cin>>ab[i][j]>>bc[i][j];
}
}
cout<<endl;

for (int i=0; i<3; i++)
{
for (int j=0; j<3; j++)
{
cout<<"    "<<ab[i][j]<<"     ";
}
cout<<endl;
}
for (int i=0; i<3; i++)
{
for (int j=0; j<3; j++)
{
cout<<"    "bc[i][j]<<"     ";
}
cout<<endl;
}
int ac[3][3];
for (int i=0; i<3; i++)
{
for (int j=0; j<3; j++)
{
ac[i][j]=ab[i][j]+bc[i][j];
}
}
for (int i=0; i<3; i++)
{
for (int j=0; j<3; j++)
{
cout<<"    "<<ac[i][j]<<"    ";
}
cout<<endl;
}



return 0;
}
