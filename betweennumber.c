#include<stdio.h>
void main()
{
    int n,a,b,c=0;
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++)
    {
        if(i==n)
        {
            c++;
        }
}
if(c==1)
{
    printf("yes");
}
 else
 {
     printf("no");
 }
}
