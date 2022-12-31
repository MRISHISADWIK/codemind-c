#include<stdio.h>
int main()
{
    int n,b,i;
    scanf("%d%d",&n,&b);
    for(i=1;i<=b;i++)
    {
        if(i%2==1)
        {
        printf("%d x %d = %d
",n,i,n*i);
    }
}}