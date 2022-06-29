#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    if(i%2==0||i%3==0||i%5==0||i%7==0)
    {
      printf("%d is not a prime number. ",i);
    }
    else if(i==1)
    {
        printf("%d is neither prime number nor composite",i);
    }
    else
    {
    printf("%d is a prime number. ",i);
    }
}
