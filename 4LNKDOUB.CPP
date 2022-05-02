//TO CREATE AND DISPLAY DOUBLY LINKED LIST
//CREATE---->DISPLAY----->BEGINSERT---->ENDINSERT---->SPECIFICINSERT
//begdel------enddel--------specificdel.
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *prev,*next;
};
struct node *head=0,*temp=0;
void create()
{ int choice=1;
while(choice)
{
 struct node *newnode;
 newnode=(struct node *)malloc(sizeof(struct node));
 cout<<"\n enter data";
 cin>>newnode->data;
 newnode->next=0;
 if(head==0)
 {head=newnode;
 newnode->prev=0;
 temp=head;}
 else
 {newnode->prev=temp;
 temp->next=newnode;
 temp=temp->next;}
 cout<<"\n enter 0,1 ";
 cin>>choice;
}
}
void display()
{int count=0;
struct node *temp=head;
while(temp!=0)
{count++;
cout<<"\n data is="<<temp->data;
temp=temp->next;}
cout<<"\n Number of nodes in linked list is="<<count;
}
void beginsert()
{temp=head;
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
cout<<"\nenter data";
cin>>newnode->data;
newnode->prev=0;
newnode->next=temp;
temp->prev=newnode;
head=newnode;
}
void endinsert()
{
struct node *newnode;
 temp=head;
 while((temp->next)!=0)
 temp=temp->next;
 newnode=(struct node *) malloc(sizeof(struct node));
 cout<<"\n enter data";
 cin>>newnode->data;
 newnode->next=0;
 newnode->prev=temp;
 temp->next=newnode;
}
void specificinsert()
{
 int pos,i=1;
 struct node *newnode;
 temp=head;
 cout<<"\n Enter position you want to insert";
 cin>>pos;
 while(i!=pos-1)
 {temp=temp->next;
 i++;}
 newnode=(struct node*) malloc(sizeof(struct node));
 cout<<"\n Enter data";
 cin>>newnode->data;
 newnode->prev=temp;
 newnode->next=temp->next;
 temp->next=newnode;
 temp=newnode;
 temp=newnode->next;
 temp->prev=newnode;
}
void begdel()
{temp=head;
head=head->next;
head->prev=0;
free(temp);}
void enddel()
{temp=head;
struct node*last;
while((temp->next)!=0)
{temp=temp->next;}
last=temp;
temp=temp->prev;
temp->next=0;
free(last);}
void specificdel()
{int pos,i=1;
temp=head;
struct node *one;
cout<<"\n enter position you want to delete";
cin>>pos;
while(i!=pos)
{temp=temp->next;
i++;}
one=temp->prev;
one->next=temp->next;
one=temp->next;
one->prev=temp->prev;
free(temp);
}
/*void reverse()
{
 head=head->prev;
}*/

void main()
{clrscr();
create();
display();
cout<<"\n BEGENING INSERT";
beginsert();
display();
cout<<"\n AFTER END INSERT";
endinsert();
display();
specificinsert();
cout<<"\n AFTER SPECIFIC INSERT";
display();
begdel();
cout<<"\n after begening delete";
display();
enddel();
cout<<"\n after end delete";
display();
specificdel();
cout<<"\n after specific delete";
display();
/*reverse();
cout<<"\n After reversing a doubly linked list";
display();   */
getch();
}




