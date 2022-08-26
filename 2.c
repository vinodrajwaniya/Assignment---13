#include<stdio.h>
int firstoddsum(int n);

int firstoddsum(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    sum = (2*n-1)+firstoddsum(n-1);
    return (sum);
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("Sum is %d",firstoddsum(n));
    return 0;
}