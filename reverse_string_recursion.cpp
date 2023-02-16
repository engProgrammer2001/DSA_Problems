#include<iostream>
using namespace std;

void reverse(string& str, int i, int j)
{
    ///Base Case
    if(i>j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str,i,j);
}
int main()
{
    string name = "ramsujansingh";

    reverse(name,0,name.length()-1);
    cout<< name<< endl;
}
