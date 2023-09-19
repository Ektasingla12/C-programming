#include<stdio.h>
int main()
{
	int r,pi=3.14,a,c;
	printf("enter value of r");
	scanf("%d",&r);
	a=pi*r*r;
    printf("area=%d",a);
    c=2*pi*r;
    printf("\nperimeter=%d",c);
	return 0;
}