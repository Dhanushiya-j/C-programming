#include <stdio.h>
void main ()
{
int i,j,matnum[5][5],m,n,total=0;
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
          if(i+j==n-1)
        total=total+matnum[i][j];
    }
  }
    printf("diagonal  element cross addition:%d",total);
   }
