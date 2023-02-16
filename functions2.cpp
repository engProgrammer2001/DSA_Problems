
#include<iostream>
using namespace std;
void add(int a,int b=50,int c=50)
{
    int sum=0;
    sum=a+b+c;
    cout<<"\nAdditions is: "<<sum;
}
int main()
{
    add(10,20);
    add(10,20,30);
    add(20);
}

