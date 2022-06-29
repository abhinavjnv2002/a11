#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&i);
    while(i!=0)
    {
     i/=10;
     ++n;
    }
    printf("count of digits is %d. ",n);
}
