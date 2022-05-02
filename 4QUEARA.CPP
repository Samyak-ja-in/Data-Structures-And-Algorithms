#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#define n 5
int queue[n];
int front=-1;
int rear=-1;
void enqueue(int x)
{
if(rear==n-1)
cout<<"\nqueue is full";
else
if(front==-1 && rear==-1)
{front++;
rear++;
queue[rear]=x;
}
else
{rear++;
queue[rear]=x;
}
}
void dequeue()
{
if(rear==-1 &&front==-1)
cout<<"queue is empty";
else
if(rear==front)
{cout<<"\n dequeued element is="<<queue[front];
rear=front=-1;}
else
{cout<<"\ndequeued element is="<<queue[front];
front++;}
}
void display()
{ int i;
if(front==-1 && rear==-1)
cout<<"\n queue is empty";
else
{for(i=front;i<=rear;i++)
cout<<"\n element of queue is="<<queue[i];}
}
void peek()
{
if(front==-1 && rear==-1)
cout<<"\nqueue is empty";
else
cout<<"\n Element first in queue is="<<queue[front];
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
//enqueue(7); //CODE ME KHAMI YE H KIHM DEQUEUE KARNE KE BAAD FRONT++ KAR RHE
//H AUR FRONT NEXT KO POINT KAR RHA H IS JAGAH AGAR DEQUEUE KE BAAD ENQUEUE
//KIYA TOH DATA DESIRED LOCATION PAR NHI JAYEGA
dequeue();
peek();
display();
dequeue();
display();
/*enqueue(5);
dequeue();
enqueue(9);
display(); */
getch();
}











