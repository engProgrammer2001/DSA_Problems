/// write a program to print sum of array by  using recursion

#include<iostream>
using namespace std;

int isSum(int arr[], int size)
{
    /// Base Case
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }

    int remeaningPart = isSum(arr+1, size-1);
     int sum = arr[0] + remeaningPart;
    return sum;
}

int main()
{
    int arr[5] = {2,4,6,8,9};
    int size = 5;

    int sum = isSum(arr, size);
    cout<<"Sum is: "<<sum <<endl;

}
