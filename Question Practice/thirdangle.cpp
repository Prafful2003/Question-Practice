#include<iostream>
using namespace std;
int main()
{
  int o,p,l,m;
cout<<"Enter the angle one :";
cin>>o;
cout<<endl;
cout<<"Enter the angle two :";
cin>>p;
cout<<endl;
cout<<"The two angle measurement is "<<(o+p)<<"°"<<endl;
l=o+p;
cout<<"Subtract this angle "<<l<<"°"<<" from 180° =180°-"<<l<<"°"<<endl;
m=180-l;
cout<<"                                  ="<<m<<"°"<<endl;
cout<<"The third angle is "<<m<<"°";
 return 0;
}  