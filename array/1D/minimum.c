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
	int min=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("minimum number is %d ",min);
	return 0;
}
