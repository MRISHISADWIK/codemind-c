#include<stdio.h>
int main()
{
    int i,a,n,r=0,d,f;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n);
        r=0;
        f=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
        
    }
    if(r==f)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}