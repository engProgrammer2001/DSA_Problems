/// write a program to sort array by using
/// bubble sort recursion
#include<iostream>
using namespace std;
void SortedArray(int arr[], int size)
{
    /// Base Case - already sorted
    if(size == 0 || size == 1)
    {
        return;
    }

    for(int i=0; i<size-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    SortedArray(arr,size-1);
}
int main()
{
    int arr[6] = {2,5,1,6,9,8};
    int size = 6;

    SortedArray(arr, size);
    for(int i=0; i<size; i++)
    {
        cout<< arr[i] <<" ";
    }
    return 0;
}
