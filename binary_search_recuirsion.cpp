
/// binary search by using recursion concept
#include<iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int key)
{
    /// Base Case
    if(s>e)
    {
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] == key)
    {
        return true;
    }
    if(arr[mid]<key)
    {
        return binarySearch(arr,mid+1,e,key);
    }
    else
    {
        return binarySearch(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 18;
    int s = 0;
    int e = 5;
    cout<<"Present or not: "<<binarySearch(arr,s,e,key)<< endl;
    return 0;
}
