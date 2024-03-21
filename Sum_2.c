
#include<stdio.h>
int main()
{
    int a,b,x,y,res,res1=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(int i=a;i<=b;i ++)
    {
    	if(i%x==0)
    	{
    	   if(i%y!=0)      	
    	   {
    	   	   res = i;//12
    	   	   res1 = res1+res;
		   }
    		
		}
	}
    printf("%d",res1);
}
    
