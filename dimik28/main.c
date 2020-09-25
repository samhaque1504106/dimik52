#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,a[10000],d=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(t-1);i++)
    {
        if(a[i]>a[i+1])
        {
            d=1;
            break;
        }

    }
     if(d==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    return 0;
}
