#include<stdio.h>
int main()
{
    int n,r=0,f=0,b=0;
    scanf("%d",&n);
    f=n;
    while(n>0)
    {
        b=n%10;
        r=r*10+b;
        n=n/10;
    }
    if(f==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    }
