#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef _DEBUG
		freopen("i.txt","r",stdin);
		freopen("o.txt","w",stdout);
	#endif
	string a,b;
	cin>>a;
	int l=0,i;
	char arr[a.length()];
	for(i=0;i<a.length();i++
	{
		if(a[i]!='+')
			arr[l++]=a[i];
	}
	sort(arr,arr+l);
	
	 for(i=0;i<l;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 l=0;
	 // for(i=0;i<a.length();i+=2)
	 // {
	 // 	b[i]=arr[l++];
	 // 	b[i+1] = '+';
	 // }
	 for (int i = 0; i < b.length(); ++i)
	 {
	 	cout<<b[i];
	 }
	 cout<<b;
	

	return 0;
}