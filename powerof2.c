#include <stdio.h>
int main()
{
    int num,temp,flag;
  scanf("%d",&num);
  temp=num;
    flag=0;
    while(temp!=1)
    {
        if(temp%2!=0){
            flag=1;
            break;
        }
        temp=temp/2;
    }
  
    if(flag==0)
        printf("yes");
    else
        printf("no");
        return 0;
}
