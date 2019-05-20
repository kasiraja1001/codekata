#include <stdio.h>
int main()
{
   int a,i,sum=0;
   scanf("%d",&a);
  if(a>0)
   {
        for(i=1;i<=a;i++)
       {
      sum=sum+i;
      }
      printf("%d",sum);
   }
   else
   {
       printf("Invalid number");
      
   }
   return 0;
}
