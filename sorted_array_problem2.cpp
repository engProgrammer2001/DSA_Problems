#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // Base Case
    if(size==0 || size == 1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        int remeaning = isSorted(arr+1, size-1);
        return remeaning;
    }
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,23};
    int size = 10;

    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is Not Sorted";
    }

}
