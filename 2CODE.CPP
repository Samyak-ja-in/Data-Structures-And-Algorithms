#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k,t;
int a[100];
printf("enter number of elements of array");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("sorted array is");
for(i=0;i<n;i++)
{
for(k=i+1;k<n;k++)
{
if(a[k]>a[i])
{
t=a[i];
a[i]=a[k];
a[k]=t;
}
}
}
printf("sorted array is");
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("different elements are");
for(i=0;i<n;i++)
{
if((a[i]==a[i+1]))
{
printf("%d",a[i]);
i++;
break;
}
}
}
getch();
}










