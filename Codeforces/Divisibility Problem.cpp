#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    long long int a,b,x;
    while(test--)
    {
        cin>>a>>b;
        if(a%b==0)
            cout<<"0\n";
        else
        {
            x=b-(a%b);
            cout<<x<<"\n";
        }
    }
}
