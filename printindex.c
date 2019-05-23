#include <stdio.h>

int main()
{
   int a[50],n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       printf("%d %d\n",a[i],i);
   }
}
