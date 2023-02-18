
/// write a program to find power of two.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans =1;

    for(int i = 0; i<=30; i++)
    {
        if(ans == n){
           cout<< "true";
        }
        ans = ans * 2;
    }
    cout<<"false";
}
