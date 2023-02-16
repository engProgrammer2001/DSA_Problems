
/// write a Program to find recursion

#include<iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout<<"source "<< src <<" Destination "<< dest <<endl;
    // base case
    if(src == dest){
        cout<<"Pahuvh gya Home"<<endl;
    }
    else
    {
        reachHome(src+1, dest);
        return;
    }
}
int main()
{
    int dest =10;
    int src = 1;

    cout<<endl;
    reachHome(src,dest);

}
