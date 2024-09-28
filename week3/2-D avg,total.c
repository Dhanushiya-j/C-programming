#include <stdio.h>
void main ()
{
int i,j,scores[40][5],m,total,avg;
printf("enter the no. of sudents");
scanf("%d",&m);
   for (i=0;i<m;i++)
   {total=0;
       for (j=0;j<5;j++)
      { 
          scanf("%d",&scores[i][j]);
          total=total+scores[i][j];
      }
     avg=(float)total/5;
     printf("total mark of student [%d]:%d",i,total);
     printf("average mark of student [%d]:%d",i,avg);
   }
  
}
