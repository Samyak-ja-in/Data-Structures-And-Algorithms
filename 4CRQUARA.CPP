#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#define n 5
int queue[n];
int rear=-1;
int front=-1;
void enqueue(int x)
{
if(rear==-1&&front==-1)
{rear++;
front++;
queue[rear]=x;
}
else
{
if((rear+1)%n==front)
{cout<<"\n queue is full";}
else
{
rear=(rear+1)%n;
queue[rear]=x;
}
}
}
void display()
{int i=front;
if(rear==-1&&front==-1)
cout<<"queue is empty";
else
{
while(i!=rear)
{
cout<<"\ndata is="<<queue[i];
i=(i+1)%n;
}
cout<<"\ndata is"<<queue[rear];
}
}
void dequeue()
{
if(front==-1&&rear==-1)
cout<<"\n list is empty";
else
if(front==rear)
{front=rear=-1;
}
else
{cout<<"\n dequeued element is="<<queue[front];
front=(front+1)%n;}
}
void peek()
{
if(front==-1&&rear==-1)
{cout<<"\nqueue is empty";}
else
cout<<"\n element at peek is="<<queue[front];
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
display();
peek();
enqueue(6);
peek();
display();
getch();
}





