#include<stdio.h>
int main()
{
    int i,j,n;
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
        for(j=i;j<n-1;j++)
        {
            if (arr[i]==arr[j+1])
            {
            	printf("duplicate number is %d",arr[i]);
			}
        }
    }
    return 0;
}
