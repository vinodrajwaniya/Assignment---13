#include<stdio.h>
int firstsquaresum(int n);

int firstsquaresum(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    sum = (n*n)+firstsquaresum(n-1);
    return (sum);
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("Sum is %d",firstsquaresum(n));
    return 0;
}