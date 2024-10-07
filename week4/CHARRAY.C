#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],n,i;clrscr();
printf("enter the no. of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
for(i=0;i<n;i++)
{
printf("element %d:%d\n",i+1,b[i]);
}
getch();
}