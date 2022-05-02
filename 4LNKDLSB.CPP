#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int n;
struct node *link;
};
struct node *start=NULL;
void main()
{
start=(struct node *) malloc(sizeof(struct node));
cout<<"enter data";
cin>>start->n;
cout<<start->n;
getch();
}

