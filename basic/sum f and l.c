#include<stdio.h>
int main()
{
	int f,s,l,a,sum;
	scanf("%d",&a);
	f=a%10;
	l=a/100;
	sum=f+l;
	printf("sum of first and last digit is %d",sum);
	return 0;
}
