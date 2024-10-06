#include <stdio.h>

void main() {
    int i,j,n,p;
    printf("enter the number:");
    scanf ("%d",&n);
    for(i=2;i<=n;i++)
    {p=1;
        for(j=2;j<=i/2;j++)
        {
              if(i%j==0)
             {p=0;
               break;
             }
       
        }
        if(p==1)
        printf("%d\n",i);
        
         
       
    }

}
