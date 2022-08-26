#include<stdio.h>
int sumoffactorial(int n);

int sumoffactorial(int n)
{
    int sum=1;
    if(n==1)
        return 1;
    sum=n*sumoffactorial(n-1);
    return (sum);
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("Sum is %d",sumoffactorial(n));
    return 0;
}