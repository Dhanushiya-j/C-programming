#include<stdio.h>

void main()
{
int row, space,i;

printf("enter the row:");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
{for(space=1;space<=row-i;space++)
printf("\t");
}
{for(space=1;space<=row;space++)
printf("*\t");
}

printf("\n");
}

}
