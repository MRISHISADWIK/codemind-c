#include<stdio.h>
int main()
{
    int n,b,c,s=0,i,j,k=0;
    scanf("%d",&n);
    b=n*n;
    while(n!=0)
    {
        c=n%10;
        s=s*10+c;
        n=n/10;
    }
    i=s*s;
    while(i!=0)
    {
        j=i%10;
        k=k*10+j;
        i=i/10;
    }
    if(b==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}