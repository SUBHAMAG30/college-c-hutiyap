#include<stdio.h>
#include<math.h>

int main()
{
    int x,n,sign=1,flag=1,sum=0;
    printf("Enter the value of x: \n");
    scanf("%d",&x);
    printf("Enter the term: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(sign*pow(x,flag));
        sign=sign*(-1);
        flag=flag+2;
    }
    printf("\nThe sum =%d",sum);
    return 0;
}
