#include<iostream>
using namespace std;
class rectangle
{ 
int l,b; 
public:
void area(int a,int c);
void perimeter(int d,int e);
};
void rectangle::area(int a,int c)
{ 
l=a;
b=c;
cout<<"Area"<<a*c<<endl;
} ;
void rectangle::perimeter(int d,int e)
{ 
l=d;
b=e;
cout<<"Perimeter"<<2*(d+e)<<endl;
};
int main ()
{
	rectangle r1;
	r1.area(2,1);
	r1.perimeter(5,2);
	return 0;
}