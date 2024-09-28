#include <stdio.h>
void main ()
{
    int a,b,r,n1,n2;
    printf("enter number1:");
    scanf("%d",&n1);
    printf("enter number2:");
    scanf("%d",&n2);
    if(n1>n2)
   { a=n1;
    b=n2;
   }
    else
    {
    a=n2;
    b=n1;
    }
    while(b!=0)
    {
        r=a%b;
        if(r==0)
        {
            a=b;
            break;
        }
       else
       {
        a=b;
       }
        b=r;
    }
    printf("the gcd of %d,%d is %d ",n1,n2,a);
}
