//To Create,display,beginsert,endinsert,specificinsert,begdel,enddel,specific
//del in a circular linked list

#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{struct node *link;
int data;};
struct node *head=0,*temp;
void createnode()
{ int choice=1;
struct node *prev;
struct node *newnode;
while(choice!=0)
{
newnode=(struct node*)malloc(sizeof(struct node));
(newnode->link)=head;
cout<<"\n enter data";
cin>>newnode->data;
if(head==0)
{head=newnode;
prev=head;}
else
{prev->link=newnode;
prev=newnode;}
cout<<"\n enter (0,1)";
cin>>choice;
}
}
void display()
{
temp=head;
int count=0;
while((temp->link)!=head)
{cout<<"data="<<temp->data<<"\n";
temp=temp->link;
count++;}
cout<<"data="<<temp->data;
cout<<"\nNumber of node in this linked list is="<<count+1;
}
void begins()
{
temp=head;
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
cout<<"\n enter data to be inserted at begening";
cin>>newnode->data;
newnode->link=temp;
while((temp->link)!=head)
temp=temp->link;
head=newnode;
temp->link=head;
}
void endins()
{struct node *newnode;
temp=head;
while((temp->link)!=head)
temp=temp->link;
newnode=(struct node *)malloc(sizeof(struct node));
cout<<"\n enter data to be inserted at end";
cin>>newnode->data;
temp->link=newnode;
newnode->link=head;
}
void specificinsert()
{temp=head;
struct node *newnode,*prev;
int pos,i=1;
cout<<"\n enter position at which you want to insert";
cin>>pos;
while(pos!=i)
{prev=temp;
temp=temp->link;
i++;}
newnode=(struct node *)malloc(sizeof(struct node));
cout<<"enter data to be inserted at "<<pos<<" position";
cin>>newnode->data;
prev->link=newnode;
newnode->link=temp;
}
void begdel()
{temp=head;
struct node *first;
first=head;
while((temp->link)!=head)
temp=temp->link;
temp->link=first->link;
head=first->link;
free(first);
}
void enddel()
{temp=head;
struct node *prev;
while((temp->link)!=head)
{prev=temp;
temp=temp->link;}
prev->link=head;
free(temp);
}
void specificdel()
{int pos,i=1;
struct node *prev;
temp=head;
cout<<"\n enter position you want to delete";
cin>>pos;
while(pos!=i)
{prev=temp;
temp=temp->link;
i++;}
prev->link=temp->link;
free(temp);
}
void main()
{
 clrscr();
 createnode();
 display();
 begins();
 cout<<"\n AFTER BEGENING INSERTION\n";
 display();
 endins();
 cout<<"\n AFTER END INSERT\n";
 display();
 specificinsert();
 cout<<"\n AFTER SPECIFIC INSERT\n";
 display();
 begdel();
 cout<<"\n AFTER BEGENING DELETE\n";
 display();
 enddel();
 cout<<"\n AFTER END DELETE\n";
 display();
 specificdel();
 cout<<"\n AFTER SPECIFIC DELETE\n";
 display();
 getch();
}