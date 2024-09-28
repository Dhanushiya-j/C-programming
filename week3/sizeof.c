#include<stdio.h>
void main()
{int n;
n= sizeof(int); 
    printf("int:%d\n",n);
    n= sizeof(char); 
    printf("char:%d\n",n);
    n= sizeof(float); 
    printf("float:%d\n",n);
     n= sizeof(signed); 
    printf("signed:%d\n",n);
     n= sizeof(unsigned); 
    printf("unsigned:%d\n",n);
    n= sizeof(double); 
    printf("double:%d\n",n);
     n= sizeof(long double); 
    printf("long double:%d\n",n);
      n= sizeof(short); 
    printf("short:%d\n",n);
    n= sizeof(void); 
    printf("void:%d\n",n);
   
}

output:
int:4
char:1
float:4
signed:4
unsigned:4
double:8
long double:16
short:2
void:1
