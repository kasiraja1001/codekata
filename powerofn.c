#include <stdio.h>

int main()
{
   int i,k,n,sum=1;
   scanf("%d%d",&k,&n);
   for(i=1;i<=k;i++)
   {
       sum=sum*n;
   }
   
   printf("%d",sum);
}
