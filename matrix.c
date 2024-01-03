#include<stdio.h>

void main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int s=i;s<n;s++)
            {
                for(int q=j;q<m;q++)
                {
                    int x,y,sum=0;
                    for(x=i;x<=s;x++)
                    {
                        for(y=j;y<=q;y++)
                        {
                            sum+=arr[x][y];
                        }
                    }
                    if(sum==k)
                    {
                        printf("%d %d\n",x-i,y-j);
                        for(x=i;x<=s;x++)
                        {
                            for(y=j;y<=q;y++)
                            {
                            printf("%d ",arr[x][y]);
                            }
                            printf(" \n");
                        }
                        return;
                    }

                }
            }
        }
    }
}
