#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,a;
         int x,y,x1,y1,z;
        scanf("%d",&a);
        if(a==120)printf("NO, %d is not a perfect number!\n",a);
        else
        {
            for(i=2;i<=a;i++)
        {

            x = pow(2,i);
            x1 = x-1;
            y = i-1;
            y1 = pow(2,y);
            z = x1*y1;
            if(a==z)
            {
                break;
            }

        }
        if(a==z)
            {
                printf("YES, %d is a perfect number!\n",a);
            }
            else printf("NO, %d is not a perfect number!\n",a);
    }
        }

    return 0;
}
