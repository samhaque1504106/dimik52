#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int a,b,c,i;
        scanf("%d%d%d",&a,&b,&c);
        for(i=1;i<=c;i++)
        {
            if(i%a==0 && i%b==0)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
