#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

//output:
11111
22222
33333
44444
55555
