#include<stdio.h>
int main()
{
	
	int gs,da,hra,basic;
	printf("enter ur gross salary");
	scanf("%d",&gs);
	da=0.4*gs;
	hra=0.2*gs;
	basic=da+hra+gs;
	printf("your entire amount is %d",basic);
	return 0;
}
