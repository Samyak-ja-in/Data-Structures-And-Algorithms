#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *start=NULL;
//struct node *temp=0;
struct node * createnode()
{struct node *n;
n=(struct node*) malloc(sizeof(struct node));
return(n);
}
void setnode()
{struct node *temp;
temp=createnode();
cout<<"enter data";
cin>>temp->data;
temp->link=NULL;
if(start==NULL)
start=createnode();
}
void displaynode()
{   struct node *t=start;
 while(!(t->link==0))
 {cout<<t->data;
 t=t->link;}
}
void main()
{
setnode();
setnode();
displaynode();
getch();
}














