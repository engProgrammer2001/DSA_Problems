// This is the concept of the class with additons programs
#include<iostream>
using namespace std;
class Addition
{
private:
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter two Number: ";
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<"\nAdditions is : "<<a+b;
    }
};
int main()
{
    Addition add;
    add.getdata();
    add.putdata();
}
