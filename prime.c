#include<stdio.h>


int is_prime(int n)
{

    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        return 0;
    }
    return 1;
}
int prime_product(int n)
{
    if(n==0)
    return 0;
    int prod=1;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && is_prime(i)==1)
        prod*=i;
    }
    return prod;
}

void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",prime_product(n));
}