#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int a[20];
int i,j,n;
int temp;
cout<<"\n  enter number of elements in array";
cin>>n;
cout<<"\n enter elements of array";
for(i=0;i<n;i++)
cin>>a[i];
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{a[j+1]=a[j];
j--;}
a[j+1]=temp;
}
cout<<"\n sorted array is";
for(i=0;i<n;i++)
cout<<a[i]<<"\n";
getch();
}
