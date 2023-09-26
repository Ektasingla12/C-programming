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
	int max=arr[0];
	int smax=INT_MIN;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(smax<arr[i] && max!=arr[i])
		{
			smax=arr[i];
		}
	}
	printf("second maximum number is %d ",smax);
	return 0;
}
