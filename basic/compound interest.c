#include<stdio.h>
#include<math.h>
int main()
{
	float ci;
	int p,r,t;
	printf("input value of p,r,t");
	scanf("%d %d %d",&p,&r,&t);
	ci=p*pow(1+r/100,t)-p;
	printf("compound interest is=%f",ci);
	return 0;
}
