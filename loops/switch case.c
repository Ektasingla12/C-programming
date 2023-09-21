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
    switch(avg/10)
    {
    	case 10:
    	case 9:
    	case 8:
    	  printf("\ngrade A");
    	  break;
    	case 7:
    	case 6:
    	  printf("\ngrade B");
    	  break;
    	case 5:
    	  printf("\ngrade C");
    	  break;
    	case 4:
    	  printf("\ngrade D");
    	  break;
    	default:
    		printf("\nfail");
    	 
	}
	return 0;
}
