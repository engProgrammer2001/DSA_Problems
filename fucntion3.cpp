#include<iostream>
using namespace std;
int Squere(int a)
{
    int result;
    result = a*a;
    cout<<"Squere is: "<<result;

}
int main()
{
    int a;
    cout<<"Enter Number: ";
    cin>>a;
    Squere(a);
}
