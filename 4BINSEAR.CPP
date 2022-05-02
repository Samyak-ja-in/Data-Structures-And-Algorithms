#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{ clrscr();
int a[7];
int i,n,l=0;
int r=n-1,mid,p;
cout<<"\n enter number of elements in array";
cin>>n;
cout<<"\n enter sorted elements of array";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\n enter data to be found";
cin>>p;
while(l<=r)
{
mid=(l+r)/2;
if(a[mid]==p)
{cout<<"element found at position"<<mid+1;}

else
{
if(a[mid]<p)
l=mid+1;
else
r=mid-1;
}
}
if(l>r)
cout<<"\nelement is not found";
getch();
}





