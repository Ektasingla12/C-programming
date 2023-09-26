#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n,m,j;
    printf("enter length of array n and m ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter value of array ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int max=arr[0][0];
    int smax=INT_MIN;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(max<arr[i][j])
            {
            max=arr[i][j];
	        }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(smax<arr[i][j] && arr[i][j]!=max)
            {
            smax=arr[i][j];
			}
        }
    }
    printf("second maximum number is %d ",smax);
    return 0;
}
