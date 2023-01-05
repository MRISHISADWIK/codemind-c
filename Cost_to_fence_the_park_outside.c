#include<stdio.h>
int main()
{
    int l,b,w,c,e,sa,la;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    sa=l*b;
    la=(l+(2*w))*(b+(2*w));
    e=(la-sa)*c;
    printf("%d",e);
    
}