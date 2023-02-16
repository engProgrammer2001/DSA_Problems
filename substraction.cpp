#include<iostream>
using namespace std;
class subtraction
{
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter Number: ";
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<"Substraction is: "<<a-b;
    }
};
int main()
{
    subtraction sub;
    sub.getdata();
    sub.putdata();
}
