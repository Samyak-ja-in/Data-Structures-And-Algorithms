#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
int data;
if(top==N-1)
cout<<"\n stack is full";
else
{
cout<<"\n enter data to be inserted in stack";
cin>>data;
top++;
stack[top]=data;
}
}
void display()
{int i;
if(top==-1)
cout<<"\n stack is empty";
else
{
for(i=top;i>=0;i--)
cout<<"\ndata is"<<stack[i];
}
}
void pop()
{
if(top==-1)
cout<<"\nstack is empty";
else
{cout<<"\n popped value at position"<<top+1<<"is"<<stack[top];
top--;
}
}
void peek()
{
if(top==-1)
cout<<"\nstack is empty";
else
cout<<"value at the top position is"<<stack[top];
}
void isfull()
{
if(top==N-1)
cout<<"\n Stack is full";
else
cout<<"\n Stack is'nt full";
}
void isempty()
{
if(top==-1)
cout<<"\n stack is empty";
else
cout<<"\n stack is'nt empty";
}

void main()
{ int p;
cout<<"enter Push:-1 Pop=2 Display=3 peek=4 isfull=5  isempty=6   Exit=0\n";
cin>>p;
while(p!=0)
{
switch(p)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
peek();
break;
case 5:
isfull();
break;
case 6:
isempty();
break;
default:
cout<<"\n entered value is invalid";
break;
}
cout<<"\n enter p";
cin>>p;
}
getch();
}


