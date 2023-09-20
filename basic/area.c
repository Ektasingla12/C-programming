#include<stdio.h>
#include<math.h>
int main()
{
	int area,s,a,b,c;
	scanf("%d %d %d",&a,&b,&c,&s);
	s=(a+b+c)/2;
	area=sqrt (s*(s-a)*(s-b)*(s-c));
	printf("area of triangle %d",area);
	return 0;
}
