#include<stdio.h>
int power(int, int);

int power(int n, int p)
{   
    if(p!=0)
        return (n * power(n, p-1));
    return 1;
}

int main()
{
    int n,p;
    printf("Enter number ");
    scanf("%d",&n);
    printf("Enter power ");
    scanf("%d",&p);
    printf("Result is %d",power(n, p));
    return 0;
}