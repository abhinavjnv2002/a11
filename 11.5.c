#include<stdio.h>
int main()
{
    int i,s=0,f=1,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        f=f*i;
    }
    printf("factorial of %d is %d. ",N,f);
}
