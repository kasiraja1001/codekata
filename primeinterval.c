#include<stdio.h>
int main() 
{
   int i,j,m,n,count;
   scanf("%d%d",&n,&m);
   for(i=n+1;i<=m;i++)
   {
       count=0;
       for(j=2;j<=i;j++)
       {
       if(i%j==0)
       {
           break;
       }
       }
       if(j==i)
       {
           printf("%d ",i);
       }
   }
}
