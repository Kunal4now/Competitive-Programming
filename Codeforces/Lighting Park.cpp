#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef _DEBUG
		freopen("i.txt","r",stdin);
		freopen("o.txt","w",stdout);
	#endif
	int test;
	cin>>test;
	while(test--)
	{
		int n,m,ans;
		cin>>n>>m;

		 if(m==1)
		 {
		 	ans = ceil((n*1.0)/2);
		 	cout<<ans<<"\n";
		 }
		 else
		 {
		 	if(m%2==0)
		 	{
		 		ans = n*(m/2);
		 		cout<<ans<<"\n";
		 	}
		 	else
		 	{
		 		ans =  n * (m / 2) + ceil((n * 1.0) / 2);
		 		cout<<ans<<"\n";
		 	}
		 }
	}
	

	return 0;
}