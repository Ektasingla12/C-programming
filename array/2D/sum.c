#include<stdio.h>
int main()
{
    int i,n,m,j,sum=0;
    printf("enter length of array n and m ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter value of array ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           sum=arr[i][j]+sum;
        }
    }
    printf("sum of all elements is %d\t",sum);
    return 0;
}
