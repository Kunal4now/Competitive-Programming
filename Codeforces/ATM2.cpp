#include<bits/stdc++.h>
using namespace std;
int mani()
{
	int x;
	float y,z;
	cin>>x>>y;
	if(x%5==0 && amount<balance-0.50)
	{
	    z=y-x-0.50;
	    cout<<fixed<<setprecision(2)<<z;
	}
	else
	{
		cout<<y;
	}
}