#include <stdio.h>

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    int i=1,g=0;
    while(i<=a && i<=b)
    {
        if ((a%i==0) && (b%i==0))
        {
            g=i;
        }
        i++;
    }
    return g;
}

// Function to calculate the least common multiple (LCM) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to calculate the LCM of an array of frequencies
int findMinimumTime(int frequencies[], int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result = lcm(result, frequencies[i]);
    }
    return result;
}

int main() {
    int n;
    printf("Enter the number of bells: ");
    scanf("%d", &n);

    int frequencies[n];

    printf("Enter the frequencies of the bells:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &frequencies[i]);
    }

    int minimumTime = findMinimumTime(frequencies, n);
    printf("The minimum time at which all bells ring together is %d seconds.\n", minimumTime);

    return 0;
}
//This code defines two functions, gcd (greatest common divisor) and lcm (least common multiple), to calculate the GCD and LCM of two numbers. Then, it uses these functions to find the LCM of an array of frequencies provided by the user. The result is the minimum time at which all bells ring together.





