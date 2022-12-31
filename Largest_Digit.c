#include<stdio.h>
int main()
{
    int n,max=0,b;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        if(b>max)
        {
            max=b;
        }
        n=n/10;
    }
    printf("%d",max);
}