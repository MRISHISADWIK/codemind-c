#include<stdio.h>
int main()
{
    int n,r=0,b;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        r=r*10+b;
        n=n/10;
    }
    printf("%d",r);
    
}