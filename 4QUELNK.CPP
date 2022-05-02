#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *front=0,*rear=0;
void enqueue(int x)
{
 struct node *n;
 n=(struct node *)malloc(sizeof(struct node));
 n->data=x;
 n->link=0;
 if(front==0&&rear==0)
 {front=rear=n;}
else
{
 rear->link=n;
 rear=n;
}
}
void display()
{ struct node *temp=front;
if(front==0&&rear==0)
cout<<"\nqueue is empty";
else
{
while(temp!=0)
{
cout<<"\n data is="<<temp->data;
temp=temp->link;}
}
}
void dequeue()
{
struct node *temp=front;
if(front==0&&rear==0)
cout<<"\nqueue is empty";
else
{
cout<<"\ndequeued element is="<<temp->data;
front=temp->link;
free(temp);
}
}
void peek()
{if(front==0&&rear==0)
cout<<"\nqueue is empty";
else
cout<<"\n element at front of the queue is"<<front->data;
}
void main()
{
clrscr();
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
display();
dequeue();
dequeue();
display();
dequeue();
dequeue();
peek();
display();
getch();
}











