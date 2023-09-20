#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2,d;
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance between two coordinates is %d",d);
	return 0;
}
