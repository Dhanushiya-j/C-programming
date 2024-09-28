#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1=0,n2=1,count,n3;
clrscr();
printf("enter the number:");
scanf("%d",&n);

for(count=1;count<=n;count++)
{n3=n1+n2;
printf("%d+%d=%d\n",n1,n2,n3);
n1=n2;
n2=n3;
}
getch();
}