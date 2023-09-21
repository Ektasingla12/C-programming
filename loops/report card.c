#include<stdio.h>
int main()
{
	int m,e,d,p,s,total,avg;
	printf("enter value of maths");
	scanf("%d",&m);
	printf("enter value of english");
	scanf("%d",&e);
	printf("enter value of drawing");
	scanf("%d",&d);
	printf("enter value of punjabi");
	scanf("%d",&p);
	printf("enter value of science");
	scanf("%d",&s);
	total=m+e+d+p+s;
	printf("total marks is %d",total);
	avg=total/5;
	printf("\naverage marks is %d",avg);
	if(avg >80 && avg<100)
	printf("\ngrade A");
	if(avg>60 && avg<79)
	printf("\ngrade B");
	else 
	printf("\nfail");
	return 0;
}
