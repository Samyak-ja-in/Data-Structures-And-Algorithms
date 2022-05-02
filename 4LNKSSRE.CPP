#include<conio.h>
//TO SEARCH AND REVERSING A LINKED LIST LEFT SORTING
#include<iostream.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};
struct node *head=0;
struct node *temp=0;
int count=0;
void createnode()
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 cout<<"\n enter data";
 cin>>newnode->data;
 newnode->link=0;
 if(head==0)
 {head=newnode;
 newnode->link=0;
 temp=head;}
 else
 {temp->link=newnode;
 temp=newnode;}
}
void displaynode()
{ int count=0;
 temp=head;
 while(temp!=0)
 {count++;
 cout<<"\n data is="<<temp->data;
 temp=temp->link;}
 cout<<"\n Number of nodes in linked list is="<<count;
}
void search()
{
 int value;
 cout<<"\n Enter value you want to search";
 cin>>value;
 int count=0;
 temp=head;
 while(temp!=0)
 {count++;
 if(temp->data==value)
 {cout<<"\n value"<<value<<" found at place"<<count;}
 temp=temp->link;
 }
}
void reverse()
{
 struct node*prev;
 struct node*curr;
 curr=head;
 prev=head;
 head=head->link;
 curr=head;
 prev->link=0;
 while(head!=0)
 {head=head->link;
 curr->link=prev;
 prev=curr;
 curr=head;
 }
 head=prev;
}
void main()
{
clrscr();
int choice=1;
while(choice)
{createnode();
cout<<"\n want to insert more";
cin>>choice;}
displaynode();
search();
displaynode();
cout<<"\n REVERSED LINKED LIST IS\n";
reverse();
displaynode();
getch();
}






