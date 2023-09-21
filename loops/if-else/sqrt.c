#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	if(a<0)
	{
		goto ZPLUS;
	}
	b=sqrt(a);
	printf("ans is %d",b);
	ZPLUS:
	return 0;
}
