#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef _DEBUG
	freopen("input_1.txt","r",stdin);
	freopen("output_1.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	string s1="Tetrahedron",s2="Cube",s3="Octahedron",s4="Dodecahedron",s5="Icosahedron";
	string s;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s.compare(s1)==0)
		{
			sum+=4;
		}
		else if(s.compare(s2)==0)
		{
			sum+=6;
		}
		else if(s.compare(s3)==0)
		{
			sum+=8;
		}
		else if(s.compare(s4)==0)
		{
			sum+=12;
		}
		else if(s.compare(s5)==0)
		{
			sum+=20;
		}
	}
	cout<<sum<<"\n";
}
