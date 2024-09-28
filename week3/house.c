#include <stdio.h>
int main()
{
  int row,n,i,s,j,k;
  printf("enter the rows:");
  scanf("%d",&n);
  for(row=1;row<=n;row++)
  {
      for(s=1;s<=n-row;s++)
      {
          printf("\t");
      }
      for(i=1;i<=row;i++)
      {
          printf("*\t\t",i);
      }
     printf("\n");
  }
  for(row=1;row<=n-1;row++)
  {
      for(j=1;j<=2;j++)
      {
          printf("*",j);
          for(s=1;s<=n+3;s++)
          {
              printf("\t");
          }
      }
     printf("\n");
  }
  for(k=1;k<=n;k++)
  {
      printf("*\t\t",k);
  }
  
    return 0;
}
