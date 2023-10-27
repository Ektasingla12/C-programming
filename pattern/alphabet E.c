#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
			printf("*");
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("*");
			if(j=i+2)
			break;
		}
		printf("\n");
	}
	for(i=0;i<=n;i++)
	{
		printf("*");
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(j==n)
				printf("*");
		}
		printf("\n");
	}
		for(i=0;i<=n+1;i++)
	{
		printf("*");
	}
	return 0;
}




input:3
output:
*****
*
*
*
*****
*
*
*
*****
