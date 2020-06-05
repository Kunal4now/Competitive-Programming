#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef _DEBUG
	freopen("input_1.txt","r",stdin);
	freopen("output_1.txt","w",stdout);
	#endif
	//ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    int n,count=0,sum=0;
    cin>>n;
    int a[5]={100,20,10,5,1};
    while(n!=sum)
    {
    	if(n-sum>=100)
    	{
    		sum+=100;
    		count++;
    	}
    	else if(n-sum<=100)
    	{
    		if(n-sum>=20)
    		{
    			sum+=20;
    			count++;
    		}
    		else if(n-sum>=10)
    		{
    			sum+=10;
    			count++;
    		}
    		else if( n-sum>=5)
    		{
    			sum+=5;
    			count++;
    		}
    		else if(n-sum>=1)
    		{
    			sum+=1;
    			count++;
    		}
    	}
    }
    cout<<count<<"\n";
	   
    
}
