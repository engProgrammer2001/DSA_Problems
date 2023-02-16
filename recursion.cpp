/// write a Program to print a sum of N number using recursion

#include<iostream>
using namespace std;

int sum(int num)
{
    // Base case
    int ans;
    if(num != 0)
    {
        ans = num + sum(num-1);
        return ans;
    }
}
int main()
{
    int num; // 5
    cout<<"Enter number: ";
    cin>>num;
    cout<<"sum is: "<<sum(num);
    return 0;
}

