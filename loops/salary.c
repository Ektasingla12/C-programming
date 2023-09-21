#include<stdio.h>
int main()
{
	int a,hra,da,gross;
	scanf("%d",&a);
	printf("basic salary is %d",a);
	if(a<5000)
	{
		hra=0.2*a;
		da=1.1*a;
		gross=hra+da+a;
		printf("\nhra is %d",hra);
		printf("\nda is %d",da);
		printf("\ngross is %d",gross);
	}
	else
	{
		hra=0.3*a;
		da=1.2*a;
		gross=hra+da+a;
		printf("\nhra is %d",hra);
		printf("\nda is %d",da);
		printf("\ngross is %d",gross);
	}
	return 0;
}
