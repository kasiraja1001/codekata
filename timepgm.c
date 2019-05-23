#include <stdio.h>

int main()
{
   int min,h,m;
   scanf("%d",&min);
   if(min>0)
   {
       h=min/60;
       m=min-(h*60);
       printf("%d %d",h,m);
   }
}
