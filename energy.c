#include <stdio.h>

int maxTasksCompleted(int n, int efforts[], int x) {
    int maxTasks = 0;
    
    
    for(int j=0;j<n;j++)
    {
        int i=j;
        int mt2=0;
        int energy=x;
        while(energy>=efforts[i] && i<n)
        {
            energy=energy-efforts[i];
            i++;
            mt2++;
        }
        if(mt2>maxTasks)
        maxTasks=mt2;
    }
    return maxTasks;
}

int main() {
    int n;
    scanf("%d", &n);
    int efforts[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &efforts[i]);
    }
    int x;
    scanf("%d", &x);

    int result = maxTasksCompleted(n, efforts, x);
    printf("%d\n", result);

    return 0;
}
