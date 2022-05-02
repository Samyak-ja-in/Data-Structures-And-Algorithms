//  AFTER SPECIFIC POSITION INSERTION//BEGENING INSERTION//END INSERTION
//DISPLAY AND CREATE LINKLIST
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *head=0;
struct node *newnode,*temp;
int count=0;
void createnode()
{
int choice=1;
while (choice)
{
newnode=(struct node *) malloc(sizeof(struct node));
cout<<"enter data";
cin>>newnode->data;
newnode->link=0;
if(head==0)
{head=newnode;
temp=newnode;}
else
{temp->link=newnode;
temp=newnode;
}
cout<<"\nwant to enter more nodes(0,1)";
cin>>choice;
}
}
void displaynode()
{
temp=head;
//int
count=0;
while(temp!=0) ///
{cout<<"data="<<temp->data<<"\n";
temp=temp->link;
count++;
}
cout<<"\nNumber of node in this linked list is="<<count;
}
void beginsert()
{
struct node *n;
n=(struct node *)malloc(sizeof(struct node));
cout<<"\nenter data to insert at begenning";
cin>>n->data;
n->link=head;
head=n;
}
void endinsert()
{struct node *temp;
struct node *n;
n=(struct node*) malloc(sizeof(struct node));
n->link=0;
temp=head;
while(temp->link!=0)
{temp=temp->link;}
temp->link=n;
cout<<"\nenter data to be inserted at end";
cin>>n->data;
}
void afterspecific()
{
int pos,i=1;
struct node *n;
temp=head;
cout<<"enter position after which you want to insert";
cin>>pos;
if(pos>count)
cout<<"enter valid position";
else
{
while(i<pos)
{temp=temp->link;
i++;}
n=(struct node *)malloc(sizeof(struct node));
n->link=temp->link;
temp->link=n;
cout<<"\n enter data to be entered at position"<<pos+1;
cin>>n->data;
}
}
/*void begdel()
{
struct node *temp;
if(head==0)
cout<<"list is empty";
else
head=temp->link;
free(temp);
}  */
void main()
{
clrscr();
createnode();
displaynode();
beginsert();
displaynode();
endinsert();
displaynode();
afterspecific();
displaynode();
/*begdel();
displaynode(); */
getch();
}















