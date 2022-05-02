#include<stdio.h>
#include<conio.h>
#include<iostream.h>
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
if(rear==0&&front==0)
{rear=front=n;
n->link=n; }
else
{rear->link=n;
rear=n;
n->link=front;
}
}
void dequeue()
{
struct node *temp=front;
if(front==0 && rear==0)
cout<<"\n queue is empty";
else
if(front==rear)
{cout<<"\ndequeued element is"<<front->data;
front=rear=0;
free(temp);
}
else
{cout<<"\n dequeued value is"<<front->data;
front=front->link;
rear->link=front;
free(temp);
}
}
void peek()
{
if(front==0&&rear==0)
cout<<"\n queue is empty";
else
cout<<"\n top value is"<<front->data;
}
void display()
{
struct node *temp=front;
if(front==0&&rear==0)
cout<<"\n queue is empty";
else
{
while(temp!=rear)
{
cout<<"\n data is"<<temp->data;
temp=temp->link;
}
cout<<"\ndata is"<<rear->data;
}
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
dequeue();
peek();
enqueue(6);
display();
dequeue();
display();
getch();
}
