#include<stdio.h>
int main()
{
	int a,b,c,d,e; 
	printf("enter value of a,b,c,d");
	scanf("%d %d %d %d ",&a,&b,&c,&d);
	e=a;
	a=b;
	b=c;
	c=d;
	d=e;
	printf("single rotate of four digits is %d %d %d %d ",a,b,c,d);
	return 0;
	
}
