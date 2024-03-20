#include<stdio.h>
int main()
{
    int n,sum2=0,square,res1=0;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        sum2 = sum2+i;
        square = sum2 * sum2;
    }
    int res;
    for(int i=1;i<=n;i++)
    {
        res = i*i;
        res1 = res1+res ;
        res = 0;
    }
    printf("%d",(square - res1));
}