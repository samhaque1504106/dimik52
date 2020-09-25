#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        float a;
        int count = 0;
        scanf("%f",&a);
        while(a>=1)
        {
            a = a/2;
            count++;

        }
         printf("%d days\n",count);

    }
    return 0;
}
