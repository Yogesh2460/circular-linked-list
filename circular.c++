#include<iostream>
using namespace std;

class crl
{
public:
struct node
{
int data;
node *link;
};
node *p,*q,*front,*rear;
public:crl()
{
front=NULL;
rear=NULL;
}
void create(int num)
{
if(front==NULL)
{
q=new node;
q->data=num;
front=rear=q;
rear->link=front;
}
else
{
q=new node;
q->data=num;
rear->link=q;
rear=rear->link;
rear->link=front;
}}
void del(int num)
{
if(front==NULL)
{
cout<<"no nodes"<<endl;
}
else if(front==rear)
{

void dis()
{
q=front;
p=NULL;
while(q!=p)
{
cout<<q->data<<endl;
q=q->link;
p=front;
}
}
};
int main()
{
crl a;
a.create(1);
a.create(12);
a.create(15);
a.create(13);
a.dis();
return 0;
}
