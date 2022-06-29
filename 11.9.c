#include<stdio.h>
int main()
{
    int a,rev=0,rem;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    printf("Reverse number is %d",rev);
}
