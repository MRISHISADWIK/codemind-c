#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int jaffi[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&jaffi[i]);
        if(i%2==1)
        {
            sum=sum+jaffi[i];
        }
    }
    printf("%d",sum);
}