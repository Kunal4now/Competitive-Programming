#include<bits/stdc++.h>
using namespace std;
int main()
{
//	#ifndef _DEBUG
//	freopen("i.txt","r",stdin);
//	freopen("o.txt","w",stdout);
//	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,count=0,i;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=a[k-1] && a[i]>0)
			count++;
	}
	cout<<count<<"\n";

}