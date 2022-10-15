#include<iostream>
using namespace std;
int main()
    {
        float x,z;
        int y;
        cout<<"enter the total amount"<<endl;
        cin>>x;
        cout<<"enter the amount to withdrawl:"<<endl;
        cin>>y;
        if(y%5==0){
            cout<<"amount going to be withdrawl"<<endl;
            z=x-y-0.50;
            cout<<"current balance="<<z;
        }
        return 0;
    }