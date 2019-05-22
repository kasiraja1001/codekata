#include <stdio.h>

int main()
{
   int i,j,a[20],n,temp=0,m=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       for(i=0;i<n;i++)
       {
       for(j=i+1;j<n;j++)
       {
       if(a[i]>a[j])
       {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
       }
       }
       }
       
       m=(n/2);  
           printf("%d ",a[m]);
}
