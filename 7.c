#include<stdio.h>
int hcf(int, int);

int hcf(int max, int min)
{
    if(min==0)
        return max;
    hcf(min, max%min);
}

int main()
{
    int a,b,min,max;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    max=a>b?a:b;
    printf("HCF is %d",hcf(max, min));
    return 0;
}