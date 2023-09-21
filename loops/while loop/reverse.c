#include<stdio.h>
int main()
{
    int b,r,a,n;
    printf("enter ur wish");
    scanf("%d",&a);
    printf("before reverse ur number is %d",a);
    r=0;
    while(a>0)
{
    b=a%10;
    r=r*10+b;
    a=a/10;
}
printf("\nafter reverse ur number is %d",r);   
return 0;
}
