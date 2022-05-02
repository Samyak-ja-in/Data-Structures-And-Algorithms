#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Tree
{
public:
int age;
char *colour;

void outdata()
{
cout<<"age="<<age;
cout<<"\n";
cout<<"colour="<<colour;
}
};

void main()
{
clrscr();
Tree oak;
Tree pine;
pine.age=13;
pine.colour="pink";
pine.outdata();
cout<<"\n";
oak.age=17;
oak.colour="Red";
oak.outdata();
getch();
}
