#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,i,j;
        scanf("%d%d",&a,&b);

        if(a>b){printf("Invalid!\n");}
        else
        {
            printf("%d\n",a);
            for(i=2;i<=b;i=i+1)
            {
                if(a*i>b)
                {
                    break;
                }
                printf("%d\n",a*i);
            }
        }

    }
    return 0;
}
