#include<stdio.h>
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
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("maximum number is %d ",max);
	return 0;
}
