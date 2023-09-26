#include<stdio.h>
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
    return 0;
}
