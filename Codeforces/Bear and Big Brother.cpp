#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    int i,count=0;
    if(a==b)
    {
        cout<<"1"<<"\n";
    }
    else
    {
        while(a<=b)
    {
        a=a*3;
        b=b*2;
        count++;
    }
        cout<<count<<"\n";
    }
}
