#include <stdio.h>
void main ()
{
int i,j,scores[40][5],m,total,avg,maxmark=0,minmark=500,maxid,minid;
printf("enter the no. of sudents");
scanf("%d",&m);
   for (i=0;i<m;i++)
   {total=0;
       for (j=0;j<5;j++)
      {   printf("enter the mark(%d)",j);
          scanf("%d",&scores[i][j]);
          total=total+scores[i][j];
      }
     printf("total mark of student [%d]:%d\n",i+1,total);
     if(total>maxmark)
       {
         maxmark=total;
         maxid=i+1;
       }
       if(total<minmark)
       {
         minmark=total;
         minid=i+1;
       }
       
   }
   printf("maxmark:%d of id%d\nminmark:%d of id%d",maxmark,maxid,minmark,minid);
}
