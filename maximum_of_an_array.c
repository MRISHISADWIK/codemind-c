#include<stdio.h>
int main()
{
    int a,i,j,max=0;
    scanf("%d",&a);
    int kingrishi[a];
    for(i=0;i<=a;i++)
    {
        scanf("%d ",&kingrishi[i]);
    }
    max=kingrishi[0];
    for(i=0;i<a;i++)
    {
        if(kingrishi[i]>max)
    {
        max=kingrishi[i];
    }
    }
    printf("%d ",max);
}