#include<stdio.h>
int main()
{
    int a,b,r;
    scanf("%d",&a);
    r=0;
    while(a>0)
    {    b=a%10;
    r=r*10+b;
    a=a/10;}
    printf("%d",r);
    if(r==a)
    {
        printf("palindrome number");
    }
    else{
        printf("\n not palindrome");
    }
  return 0;
}
