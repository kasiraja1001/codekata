#include<stdio.h>
int main()
{
  int l,b,h,t,v;
  scanf("%d%d%d",&l,&b,&h);
t=2*l*b+2*l*h+2*b*h;
v=l*b*h;
printf("%d %d",t,v);
return 0;
}
