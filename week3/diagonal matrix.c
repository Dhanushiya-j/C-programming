#include <stdio.h>
void main ()
{
int i,j,matnum[5][5],m,n;
printf("row:");
scanf("%d",&m);
printf("column:");
   scanf("%d",&n); 
   for (i=0;i<m;i++)
   {
       for (j=0;j<n;j++)
      { 
          printf("enter the number[%d][%d]",i,j);
          scanf("%d",&matnum[i][j]);

      }

   }
       for (i=0;i<m;i++)
   {
       for (j=0;j<n;j++)
      {      
          if(i==j)
           printf("diagonal element:%d",matnum[i][j]);
         }
   }
   
}
