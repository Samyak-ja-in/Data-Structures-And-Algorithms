//implementing a stack using alinked list //push,pop,display,peek.
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *top=0;
void push(int x)
{
struct node *n;
n=(struct node *)malloc(sizeof(struct node));
n->data=x;
n->link=top;
top=n;
}
void display()
{struct node *temp=top;
if(top==0)
cout<<"\nstack is empty";
else
{while(temp!=0)
{cout<<"\n stack element is"<<temp->data;
temp=temp->link; }
}
}
void peek()
{ struct node *temp=top;
if(top==0)
cout<<"\nstack is empty";
else
cout<<"\ntopmost value of stack is"<<temp->data;
}
void pop()
{
struct node *temp=top;
if(top==0)
cout<<"\nstack is empty";
else
{
cout<<"\npopped data is"<<temp->data;
top=temp->link;
free(temp);
}
}
void main()
{
clrscr();
push(1);
push(2);
push(3);
push(4);
display(); //4,3,2,1
pop();   //4
pop();  // 3
peek();   //2
display(); //2,1
push(4);
display();//4,2,1
pop();
pop();
pop();
pop();
getch();
}





