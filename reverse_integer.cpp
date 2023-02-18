/// write a program to find a reverse of the number?

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    while(n != 0)
    {
        int digit = n % 10;
        ans = (ans * 10) + digit;
        n = n/10;
    }
    cout <<"Answere is : "<< ans <<endl;
}
