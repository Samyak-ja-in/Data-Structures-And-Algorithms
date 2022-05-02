#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *start=NULL;
struct node *createnode()
{
struct node *n;
n=(struct node * ) malloc(sizeof(struct node));
return(n);
}
void insertnode()
{
struct node *t;
struct node *temp;
temp=createnode();
cout<<"enter data";
cin>>temp->data;
//temp->link=NULL;
if(start==NULL)
start=temp->link;
else
{
t=start;
while(!(t->link==NULL))
{
t=t->link;
t->link=temp;
}
}
}
void displaynode()
{ struct node *p=start;
 while(p!=0)
 {
  cout<<p->data;
  p=p->link;
 }
}
void main()
{insertnode();
displaynode();
getch();
}


