#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a and b");
	scanf("%d %d",&a,&b);
	printf("value of a and b  before swapping = %d %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nvalue of a and b after swapping = %d %d",a,b);
	return 0;
}
