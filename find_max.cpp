#include<iostream>
using namespace std;
class max_number
{
    int a,b;
public:
    void getdata();
    void putdata();
};
void max_number::getdata()
{
    cout<<"Enter first Number: ";
    cout<<"Enter second Number: ";
    cin>>a;
    cin>>b;
}
void max_number::putdata()
{
    if(a>b){
        cout<<"first is greater than second";
    }
    else{
        cout<<"second is greater than first";
    }
}

int main()
{
    max_number mn;
    mn.getdata();
    mn.putdata();
    return 0;
}
