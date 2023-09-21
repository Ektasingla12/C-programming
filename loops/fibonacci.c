#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    printf("enter");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d %d",a,b);
    for(i=2;i<n;i++)
    {
       c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
