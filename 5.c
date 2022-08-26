#include<stdio.h>
int sumofdigit(int n);

int sumofdigit(int n)
{
    int sum=0;
    if(n==0)
        return 0;
    sum=(n%10)+sumofdigit(n/10);
    return (sum);
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("Sum is %d",sumofdigit(n));
    return 0;
}