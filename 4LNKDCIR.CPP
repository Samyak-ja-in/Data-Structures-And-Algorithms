#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev,*next;
}*head=0,*tail=0,*temp;
void create()
{
int choice=1;
struct node *newnode;
while(choice!=0)
{
newnode=(struct node*) malloc(sizeof(struct node));
cout<<"enter data";
cin>>newnode->data;
if(head==0)
{temp=newnode;
head=temp;
tail=head;}
else
{newnode->prev=temp;
temp->next=newnode;
newnode->next=head;
temp=newnode;
tail=temp;
head->prev=tail;}
cout<<"enter choice (0,1)";
cin>>choice;
}
}
void display()
{temp=head;
int count=0;
while((temp->next)!=head)
{cout<<"\n data is="<<temp->data;
temp=temp->next;
count++;}
cout<<"\n data is="<<temp->data;
cout<<"\n Number of nodes in this linked list is"<<count+1;
}
void begins()
{
temp=head;
 struct node *newnode;
 newnode=(struct node *) malloc(sizeof(struct node));
 cout<<"\nenter data to be inserted at begening";
 cin>>newnode->data;
 newnode->prev=tail;
 newnode->next=temp;
 temp->prev=newnode;
 tail->next=newnode;
 head=newnode;
}
void endins()
{
temp=tail;
struct node *newnode;
newnode=(struct node *) malloc(sizeof(struct node));
cout<<"\n Enter data to be inserted at end";
cin>>newnode->data;
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
tail=newnode;
}
void specificinsert()
{temp=head;
struct node *pre;
int pos,i=0;
cout<<"\n Enter specific position after which you want to insert";
cin>>pos;
while(i!=pos)
{pre=temp;
temp=temp->next;
i++;}
struct node *newnode;
cout<<"\n enter data to be inserted after "<<pos<<" position";
cin>>newnode->data;
newnode->prev=pre;
newnode->next=temp;
pre->next=newnode;
temp->prev=newnode;
}
void begdel()
{struct node *del;
temp=del=head;
temp=temp->next;
temp->prev=tail;
tail->next=temp;
head=temp;
free(del);
}
void enddel()
{
temp=head;
while((temp->next)!=head)
temp=temp->next;
tail=temp->prev;
tail->next=head;
head->prev=tail;
free(temp);
}
void specificdel()
{int pos,i=1;
struct node *pre,*link;
cout<<"\n Enter postion you want to delete";
cin>>pos;
temp=head;
while(i!=pos)
{temp=temp->next;
i++;}
pre=temp->prev;
link=temp->next;
pre->next=link;
link->prev=pre;
free(temp);
}

void main()
{
clrscr();
create();
display();
begins();
cout<<"\n After begening insert\n";
display();
endins();
cout<<"\n After end insert\n";
display();
specificinsert();
cout<<"\n After specific insert\n";
display();
begdel();
cout<<"\n After begening delete\n";
display();
enddel();
cout<<"\n After end delete\n";
display();
specificdel();
cout<<"\n After specific delete\n";
display();
getch();
}





