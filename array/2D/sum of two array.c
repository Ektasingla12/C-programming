#include<stdio.h>
int main()
{
    int i,n,m,j,sum,a,b;
    printf("enter length of array n and m ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int brr[n][m];
    printf("enter value of array ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter another array ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&brr[i][j]);
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
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",brr[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j]+brr[i][j];
        }
    }
    printf("sum is %d",sum);
    return 0;
}
