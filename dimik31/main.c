#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,a;
         int x,y,x1,y1,z;
        scanf("%d",&a);

        for(j=6;j<=a;j++)
        {
          for(i=2;i<=j;i++)
        {

            x = pow(2,i);
            x1 = x-1;
            y = i-1;
            y1 = pow(2,y);
            z = x1*y1;
            if(j==z)
            {
                break;
            }

        }
        if(j==z && j!=120)
            {
                printf("%d\n",j);
            }

    }
    printf("\n");
        }

    return 0;
}

