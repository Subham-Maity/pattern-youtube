#include <iostream>
using namespace std;
int main()
{
    for(int i=-3;i<=3;i++)
    {
        for(int j=1;j<=4-abs(i);j++)
        {
            cout<<"*"<<" ";
        }
        for(int j=1;j<=2*abs(i);j++)
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<=4-abs(i);j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}