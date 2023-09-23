#include<stdio.h>
int main()
{
    int i,j,n,count=0,x=12;
    printf("enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter all values of array : ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(arr[i]+arr[j]==x)
    		{
    			count++;
			}

		}
	}
	printf("\ntotal pair sum%d",count);
    return 0;
}
