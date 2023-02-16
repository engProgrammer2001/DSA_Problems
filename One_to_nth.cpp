/// wap to print number one to Nth terms.
#include<iostream>
using namespace std;
class one_n
{
    int n;
public:
    void getdata();
    void putdata();
};
void one_n:: getdata()
{
    cout<<"Enter number: ";
    cin>>n;
}
void one_n::putdata()
{
    int i;
    for(i=0; i<=n; i++){
        cout<<i<<"\n";
    }
}
int main()
{
    one_n on;
    on.getdata();
    on.putdata();
}
