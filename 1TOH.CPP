#include<conio.h>
#include<iostream.h>
void toh(int,char,char,char);
void main()
{
 int n;
 char s='s';
 char a='a';
 char d='d';
 cout<<"ENter number of disc";
 cin>>n;
 toh(n,s,a,d);
 getch();
 }
void toh(int p,char x,char y,char z)
{
if(p>=1)
 {toh(p-1,x,z,y);
  cout<<"\nmove disc from "<<x<<" to "<<z;
  toh(p-1,y,x,z);}
}