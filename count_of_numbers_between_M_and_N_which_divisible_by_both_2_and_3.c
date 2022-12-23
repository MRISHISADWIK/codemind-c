#include<stdio.h>
int main()
{
    int m,n,i,c=0;
    scanf("%d%d",&m,&n);
    for(i=n;i>=m+1;i--)
    {
        if(i%2==0 && i%3==0)
    {
        c++;
    }
    }
    printf("%d",c);
}