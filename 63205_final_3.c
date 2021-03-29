#include <stdio.h>
#include <string.h>
int main()
{
    int N,j;
    scanf("%d",&N);
    if(N<2||N>10000)
    {
        printf("ERROR\n");
    }
    else
    {
        int c[N],i,j,k=1,l[10000],m;
        for(m>=1;m<=10000;m++)
        {
            l[m]=0;
        }
        for(i=1; i<=N; i++)
        {
            scanf("%d",&c[i]);
        }
        for(j=1;j<=10000;j++)
        {
            if(j==c[k])
            {
                l[m]++;
                k++;
            }

    }
}
}

