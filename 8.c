#include<stdio.h>
int fib(int );

int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n,i;
    printf("Enter an number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",fib(i));
    return 0;
}