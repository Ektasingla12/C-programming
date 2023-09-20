#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a and b");
	scanf("%d %d",&a,&b);
	printf("value of a and b  before swapping = %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nvalue of a and b after swapping = %d %d",a,b);
	return 0;
}
