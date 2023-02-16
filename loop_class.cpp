/// wap to print number from 1 to 10.
#include<iostream>
using namespace std;
class one_ten
{
public:
    void putdata()
    {
        int i;
        for(i=0; i<=10; i++){
            cout<<i<<"\n";
        }
    }
};
int main()
{
    one_ten ot;
    ot.putdata();
}
