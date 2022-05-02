//To delete a single linked list from begening,end ,specific position.

#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *head=0,*temp;
void createnode()
{
struct node *n;
n=(struct node *) malloc(sizeof(struct node));
n->link=0;
cout<<"\n enter data";
cin>>n->data;
if(head==0)
{head=n;
temp=n;}
else
temp->link=n;
temp=n;
}
void display()
{ temp=head;
while(temp!=0)
{cout<<"\n data is"<<temp->data;
temp=temp->link;}
}
void begdel()
{
struct node *temp;
temp=head;
if(head==0)
cout<<"list is empty";
else
{head=temp->link;
free(temp);}
}
void enddel()
{
struct node *temp,*prev;
temp=head;
while(temp->link!=0)
{prev=temp;
temp=temp->link;}
prev->link=0;
free(temp);
}
void specificdel()
{
struct node *temp=head,*prev;
int i=1,pos;
cout<<"\nenter position u want to del";
cin>>pos;
if(pos==1)
{temp=head;
prev=temp;
temp=temp->link;
head=temp;
free(prev);
}
else
{
while(i<pos)
{prev=temp;
temp=temp->link;
i++;}
prev->link=temp->link;
free(temp);
}}

void main()
{
clrscr();
createnode();
createnode();
createnode();
createnode();
createnode();
createnode();
display();
begdel();
cout<<"\n data after begening delete";
display();
enddel();
cout<<"\ndata after end delete";
display();
specificdel();
cout<<"\n data after specific delete";
display();
getch();
}



