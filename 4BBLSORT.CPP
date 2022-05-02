#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int a[20];
int i,j,flag,n;
int temp;
cout<<"\n  enter number of elements in array";
cin>>n;
cout<<"\n enter elements of array";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{  flag=0;
 for(j=0;j<n-1-i;j++)
 {
   if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
      flag=1; }
 }
 if(flag==0)
 break;
}
cout<<"\n sorted array is = ";
for(i=0;i<n;i++)
cout<<a[i]<<"\n";
getch();
}
