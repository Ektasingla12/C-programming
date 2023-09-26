#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("enter length of array ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("2D array is : ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("transpose of 2D array is : ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
