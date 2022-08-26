#include<stdio.h>
int count(int);

int count(int n)
{
    int i=1;
    if(n==0)
        return 0;
    i=i+count(n/10);
    return i;
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}