#include <stdio.h>
void main()
{
  int max,min,i,num[10],n;
  printf("no.of numbers:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
 max=num[0];
 min=num[0];
for(i=0;i<n;i++)
{ if(num[i]>max)
  max=num[i];
  if(num[i]<min)
  min=num[i];
}
printf("maximum :%d\n",max);
printf("minimum :%d\n",min);
}


   
