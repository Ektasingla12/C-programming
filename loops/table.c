#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    a=1;
    while(a<10)
    {
        b=a*n;
        printf("%d * %d = %d",n,a,b);
        a++;
    }
}
