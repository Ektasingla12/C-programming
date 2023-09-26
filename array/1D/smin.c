#include<stdio.h>
#include<limits.h>
int main()
{
	int i,n;
	printf("enter length of array ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	int min;
	int smin=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(smin>arr[i] && min!=arr[i])
		{
			smin=arr[i];
		}
	}
	printf("second minimum number is %d ",smin);
	return 0;
}
