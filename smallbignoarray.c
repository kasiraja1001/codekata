#include<stdio.h>
#include<limits.h>
int main()
{
	int n,small=INT_MAX,large=INT_MIN;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<small) small=arr[i];
		if(arr[i]>large) large=arr[i];
	}
	printf("%d %d",small,large);
}
