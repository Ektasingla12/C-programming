#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int flag=0;
    for(int i=2;i<n;i++)
    {
         if(n%i==0)
        {
            flag=0;
            break;
        }
        else{
           flag=1;
        }
        
    }
    if(flag==1){
        printf("Prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}
