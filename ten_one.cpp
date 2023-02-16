#include<iostream>
using namespace std;
class ten_one
{
    int i;
public:
    void putdata()
    {
        for(i=20;i>=1;i--){
            cout<<i<<"\n";
        }
    }
};
int main()
{
    ten_one to;
    to.putdata();
}
