/// write a program to print number is palindrome or note using recursion

#include<iostream>
using namespace std;
bool isPalindrome(string str, int i, int j)
{
    ///Base Case
    if(i>j)
    {
        return true;
    }
    if(str[i] != str[j])
    {
        return false;
    }
    else{
         /// recursive Case
        return isPalindrome(str,i+1,j-1);
    }

}
int main()
{
    string name = "aabbaa";
    cout<<endl;
    bool ans = isPalindrome(name,0,name.length()-1);
    if(ans)
    {
        cout<<"It's a Palindrome"<<endl;
    }
    else
    {
        cout<<"It's not a Palindrome"<<endl;
    }
}
