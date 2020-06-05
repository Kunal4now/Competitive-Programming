// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std; 
// int main()
// {
// 	#ifndef _DEBUG
// 		freopen("i.txt","r",stdin);
// 		freopen("o.txt","w",stdout);
// 	#endif
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	int test;
// 	cin>>test;
// 	while(test--)
// 	{
// 		int i,flag=0;
// 		string s;
// 		cin>>s;
// 		for(i=0;i<s.length();i++)
// 		{
// 			if(s[i]=='?')
// 			{
// 				if(s.length()==1)
// 				s[i]='a';
// 			else if(i==0)
// 			{
// 				if(s[i+1]!='a')
// 					s[i]='a';
// 				else if(s[i+1]!='b')
// 					s[i]='b';
// 				else if(s[i+1]!='c')
// 					s[i]='c';
// 			}
// 			else if(i==s.length()-1)
// 			{
// 				if(s[i-1]!='a')
// 					s[i]='a';
// 				else if(s[i-1]!='b')
// 					s[i]='b';
// 				else if(s[i-1]!='c')
// 					s[i]='c';
// 			}
// 			else
// 			{
// 				if(s[i+1]!='a' && s[i-1]!='a')
// 					s[i]='a';
// 				else if(s[i+1]!='b' && s[i-1]!='b')
// 					s[i]='b';
// 				else if(s[i+1]!='c' && s[i-1]!='c')
// 					s[i]='c';
// 			}
// 			}
// 		}
// 		for(i=0;i<s.length()-1;i++)
// 		{
// 			if(s[i]==s[i+1])
// 			{
// 				flag=0;
// 				break;
// 			}
// 			else
// 				flag=1;
// 		}
// 		if(flag==1 || s.length()<=1)
// 			cout<<s<<"\n";
// 		else if(flag==0)
// 			cout<<"-1\n";

// 	}
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef _DEBUG
 	 	freopen("i.txt","r",stdin);
 	 	freopen("o.txt","w",stdout);
 	 #endif
	int t;
	cin>>t;
	while(t--)
	{
		int i,tru=0;
		string str;
		cin>>str;
		for(i=0;i<str.length()-1;i++)
		{
			if(str[i]!='?' && str[i]==str[i+1])
			{
				cout<<"-1"<<endl;
				tru=1;
				break;
			}
	    }
	    if(tru==0)
	    {
		    for(i=0;i<str.length();i++)
	    	{
			    if(str[i]=='?' && (str[i-1]=='b' && str[i+1]=='c') || (str[i-1]=='c' && str[i+1]=='b'))
	            {
			        str[i]='a';
		        }
		        if(str[i]=='?' && (str[i-1]=='a' && str[i+1]=='c') || (str[i-1]=='c' && str[i+1]=='a'))
	            {
			        str[i]='b';
		        }   
	            if(str[i]=='?' && (str[i-1]=='a' && str[i+1]=='b')  || (str[i-1]=='b' && str[i+1]=='a'))
		        {
			        str[i]='c';
		        }
		        if(str[i]=='?' && str[i+1]=='?' && str[i-1]=='a')
		        {
			        str[i]='b';
		        }
		        if(str[i]=='?' && str[i+1]=='?' && str[i-1]=='b')
		        {
			        str[i]='c';
		        }
		        if(str[i]=='?' && str[i+1]=='?' && str[i-1]=='c')
		        {
		            str[i]='a';
		        }
	            if(str[i]=='?' && str[i+1]=='c' && str[i-1]=='c')
		        {
		            str[i]='a';
		        }
			    if(str[i]=='?' && str[i+1]=='b' && str[i-1]=='b')
		        {
		            str[i]='c';
		        }
		        if(str[i]=='?' && str[i+1]=='a' && str[i-1]=='a')
		        {
		            str[i]='b';
		        }
		        if(str[i]=='?' && str[i-1]=='a')
		        {
		    	    str[i]='b';
			    }
			    if(str[i]=='?' && str[i-1]=='b')
		        {
		    	    str[i]='c';
			    }
			    if(str[i]=='?' && str[i-1]=='c')
		        {
		    	    str[i]='a';
			    }
		    }
			cout<<str<<"\n";
		    
	    }
	    
	    
    }  
	return 0;
}