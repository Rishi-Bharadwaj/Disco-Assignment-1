#include<stdio.h>



void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[j-1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    
    int median=a[(n-1)/2];
    int mode=0;
    int mode_count_old=0;
    
    for(int k=0;k<n;k++)
    {
        int mode_count_new=0;
        int p=a[k];
        int i =k;
        while(a[i]==p)
        {
            i++;
            mode_count_new++;
        }
        if (mode_count_new>mode_count_old)
        {
            mode_count_old=mode_count_new;
            mode=a[i-1];
        }

    }

    printf("mode: %d",mode);
}