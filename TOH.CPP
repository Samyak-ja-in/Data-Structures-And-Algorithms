#include<stdio.h>
#include<conio.h>
void main()
{
void toh(int,char,char,char);
int n;
char s,a,d;
printf("enter number of discs");
scanf("%d",n);
toh(n,s,a,d);
getch();
}
void toh(int n,char b,char a,char e)
{
 if(n>=1)
  {
   toh(n-1,b,e,a);
   printf("%c to %c\n",b,e);
   toh(n-1,a,e,b);
  }
}

