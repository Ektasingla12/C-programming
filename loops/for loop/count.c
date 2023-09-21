#include<stdio.h>
int main()
{
    int count=0,i;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0 ||i%3!=0)
        {
            count++;
        }
    }
    printf("%d\t",count);
    return 0;
}
