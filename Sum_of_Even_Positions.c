#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int king[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&king[i]);
        if(i%2==0)
        {
            sum=sum+king[i];
        }
    }
    printf("%d",sum);
}