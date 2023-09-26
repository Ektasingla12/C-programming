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
    int min=arr[0][0];
    int smin=INT_MAX;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(min>arr[i][j])
            {
            min=arr[i][j];
	        }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(smin>arr[i][j] && arr[i][j]!=min)
            {
            smin=arr[i][j];
			}
        }
    }
    printf("second minimum number is %d ",smin);
    return 0;
}
