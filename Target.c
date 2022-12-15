#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    if(a>=10 && b>=10 && c>=10 && n>=10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}