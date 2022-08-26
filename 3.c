#include<stdio.h>
int firstevensum(int n);

int firstevensum(int n)
{
    int sum=0;
    if(n==0)
        return 0;
    sum = (2*n)+firstevensum(n-1);
    return (sum);
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("Sum is %d",firstevensum(n));
    return 0;
}