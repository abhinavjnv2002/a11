#include<stdio.h>
int main()
{
    int i,s=0,N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    for(i=0;i<=N-1;i++)
    {
        s=s+2*i+1;
    }
    printf("sum of %d odd natural number is %d. ",N,s);
}
