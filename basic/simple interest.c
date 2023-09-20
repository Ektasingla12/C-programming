#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter value of p,r,t");
	scanf("%f %f %f",&p,&r,&t);
	si=p*r*t/100;
	printf("simple interest %f",si);
	return 0;
}
