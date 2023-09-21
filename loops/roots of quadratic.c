#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r1,r2;
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-(4*a*c);
    
    if(d>0)
    {
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
        printf("value of r1 and r2 is %d %d",r1,r2);
    }
    else if(d==0)
    {
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("value of r1 and r2 is %d %d",r1,r2);
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;
}
