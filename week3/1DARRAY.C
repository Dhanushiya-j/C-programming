#include<stdio.h>
#include<conio.h>
void main()
{
int stuid,totmark,grade,sub,stumark[40],n,i,j;
float avg;
clrscr();
printf("enter the no of student ");
scanf("%d",&n);
printf("enter the no.of subject");
scanf("%d",&sub);
for(i=0;i<n;i++)
{totmark=0;
printf("enter the student id:\n");
scanf("%d",&stuid);
for(j=0;j<sub;j++)
{printf("enter the mark of subject%d:",j+1);
scanf("%d",&stumark[j]);
totmark=totmark+stumark[j];
}
avg=(float)totmark/sub;
printf(" the total mark of student id %d is %d and the average mark is%f\n",stuid,totmark,avg);
}
getch();
}


