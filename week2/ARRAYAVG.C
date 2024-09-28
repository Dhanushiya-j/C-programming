#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,marks[5],i;
float avg;
clrscr();
for(i=0;i<5;i++)
{
scanf("%d",&marks[i]);
sum=sum+marks[i];
}
avg=sum/5;
printf("average value:%f",avg);
getch();
}