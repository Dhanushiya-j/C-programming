#include <stdio.h>

void main() 
{
    int ar[20],i,j,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("enter the number %d:",i+1);
        scanf("%d",&ar[i]);
    }
    for(i=2;i<n;i++)
    { for(j=2;j<=ar[i]/2;j++)
        if((ar[i])%(j)==0)
        {
        printf("%d is composite\n",ar[i]);
        break;
       
        }
        
        
    }
}
