#include<stdio.h>
int main()
{
    int n,i,b=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
              b=b+i;
            printf("\t%d",i);
        }
       
    }
    printf("\nvalue is %d",b);
    if(n==b)
    {
        printf("\nperfect number");
    }
    else
    {
        printf("\nnot perefct number");
    }
    return 0;
}
