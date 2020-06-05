#include<bits/stdc++.h>
using namespace std;
unsigned countBits(unsigned long long int number)
{
      // log function in base 2
      // take only integer part
      return (int)log2(number)+1;
}
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        int n,i;
        cin>>a[n];
        unsigned long long int a[n],b[n],x,y,z,b;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            x=a[i],y=a[i+1];
            z=a|b;
            b=__builtin_popcount(z);
            c=countBits(z);
            d=b-c;
            b[i]=2*b
        }
    }
}
