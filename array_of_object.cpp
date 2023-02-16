/// This is array program for print a number;
#include<iostream>
using namespace std;
class array_pro
{
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter two Number: ";
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<"\na="<<a<<"\nb="<<b;
    }
};
int main()
{
    array_pro aa[5];
    int i;
    for(i=0; i<5;i++){
        aa[i].getdata();
    }
    for(i=0; i<5;i++){
        aa[i].putdata();
    }
}
