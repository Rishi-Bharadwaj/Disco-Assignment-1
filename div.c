#include<stdio.h>

int sum_of_divisors(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
    }
    if (sum==n)
    return 1; 
    else{
    return 0;
    }
}

void main()
{
    int n;
    
    // Input the value of n
    scanf("%d", &n);

    // Check each number from 1 to n
    for (int i = 1; i <= n; i++) {
        if (sum_of_divisors(i))
        {
            printf("%d ",i);
        }
    }

}

