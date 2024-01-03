#include<stdio.h>

void main()
{   
    int n;
    scanf("%d",&n);
    int times[n*2];
    for (int i=0;i<2*n;i++)
    {
        scanf("%d",&times[i]);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int flag=0;
    for(int i=1;i<2*n;i=i+2)
    {
        if((x>=times[i])&&(y<=times[i+1]))
        {
            printf("Yes");
            flag=1;
        }
    }
    if (flag==0)
    printf("NO");

}