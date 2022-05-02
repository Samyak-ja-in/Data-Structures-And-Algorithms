#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define p 9
int a[p];
int search(int n)
{int i;
for(i=0;i<p;i++)
{
if(a[i]==n)
{cout<<"\n desired element is found at position"<<i+1;
return(1);
break;}
}
if(i==p)
cout<<"\n element is not found in array";
}
void main()
{int i;
cout<<"\n enter elements of array";
for(i=0;i<p;i++)
cin>>a[i];
search(3);
search(1);
search(4);
search(17);
getch();
}






