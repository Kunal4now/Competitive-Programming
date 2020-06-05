#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,easy=0,hard=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
          easy++;
        else
          hard++;
    }
    if(hard!=0)
        cout<<"HARD\n";
    else
        cout<<"EASY\n";
}
