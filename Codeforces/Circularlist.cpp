#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next;
};
node *head= NULL;
node *tail=NULL;
int push(int num)
{
	  if(head == NULL) {
    //making the new Node as Head
    head = n;
    //making the next pointer of the new Node as Null
    n->next = NULL;
  }
  else {
    //getting the last node
    node *last = getLastNode();
    last->next = n;
    //making the next pointer of new node point to head
    n->next = head;
  } 
}
void display(node *p)
{
	static int flag=0;
	if(p!=head || flag==0)
	{
		flag=1;
		cout<<p->data;
		display(p->next);
	}
	flag=0;
}
int main()
{
	#ifndef _DEBUG
		freopen("i.txt","r",stdin);
		freopen("o.txt","w",stdout);
	#endif
	int n,i,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		push(x);
	}
	int s,e;
	cin>>s>>e;
	node *tmp = head;
	display(tmp);



}