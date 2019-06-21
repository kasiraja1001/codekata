#include<stdio.h>
int main(){
  int n;
  int sum = 0;
  scanf("%d",&n);
  while(n!=0){
    n = n/10;
    sum ++;
  }
  printf("%d\n",sum);
}
