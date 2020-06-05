#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   char l1[]="I hate it";
   string l2="I hate that I love it";
   string l3="I hate that I love that I hate it";
   string s4;
   if(n==1)
   {
       cout<<l1<<"\n";
   }
   else if(n==2)
   {
       cout<<l2;
   }
   else if(n==3)
   {
       cout<<l3;
   }
   else
   {
       for(int i=0;i<n;i++)
       {
            if(i%2!=0)
            {
                if(i+1<n)
                {
                    s4.append("I love that ");
                }
                else
                {
                    s4.append("I love it");
                }

            }
            else
            {
                if(i+1<n)
                {
                    s4.append("I hate that ");
                }
                else
                {
                    s4.append("I hate it");
                }
            }
       }
        cout<<s4;
   }

}
