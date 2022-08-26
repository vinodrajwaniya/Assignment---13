#include<stdio.h>
int firstsum(int n);

int firstsum(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    sum = n+firstsum(n-1);
    return (sum);
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("Sum is %d",firstsum(n));
    return 0;
}