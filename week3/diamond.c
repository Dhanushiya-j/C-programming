#include<stdio.h>
void main()
{
    int i,j,k,rows;
    printf(" enter number of row to be printed:");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    { 
      {  for(k=0;k<rows-i;k++)
        printf("\t");
      }
        for(j=0;j<=i;j++)
     {
         printf("*\t\t");
     }
    
     printf("\n");
    }
    
       
    for(i=1;i<=rows;i++)
    { 
      {  for(k=1;k<=i+1;k++)
        printf("\t");
      }
      
       { for(j=1;j<=rows-i;j++)
     
        printf("*\t\t");
     
       }
    
      
     printf("\n");
    }

}
