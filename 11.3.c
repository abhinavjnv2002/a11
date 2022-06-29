#include<stdio.h>
int main()
{
    int i,s=0,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        s=s+i*i;
    }
    printf("sum of square of %d  natural number is %d. ",N,s);
}
