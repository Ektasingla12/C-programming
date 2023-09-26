#include<stdio.h>
int main()
{
    int i,n,m,j,esum=0,osum=0,diff;
    printf("enter length of array n ");
    scanf("%d",&n);
    int arr[n];
    printf("enter value of array ");
    for(i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(i%2==0)
    	{
    		esum=arr[i]+esum;
		}
		else
		{
    		osum=arr[i]+osum;
		}
    }
    diff=esum-osum;
    printf("sum of even indexing is %d",esum);
    printf("\nsum of odd indexing is %d",osum);
    printf("\ndifference between esum and osum is %d",diff);
	return 0;
}
