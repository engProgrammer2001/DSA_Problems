
/// write a program to find element is Presint in array
///or not By using recursion

#include<iostream>
using namespace std;

bool searchElement(int arr, int size, int key)
{
    // Base Case
    if(size == 0)
    {
        return false;
    }

    if(arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remeaning = searchElement(arr+1, size-1, key);
        return remeaning;
    }
}
int main()
{
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;

    bool ans = searchElement(arr, size, key);
    if(ans)
    {
        cout<<"Key is Present in Array";
    }
    else{
        cout<<"Key is not Present in Array";
    }
    return 0;
}
