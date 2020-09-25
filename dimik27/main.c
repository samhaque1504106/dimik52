#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,d,c=0;
        scanf("%d",&a);
        d=a;
        while(a!=0)
        {
            b=a%10;
            c=c+(b*b*b);
            a=a/10;

        }
       // printf("%d",c);
       if(c==d)
       {
           printf("%d is an armstrong number!\n",d);
       }
       else{printf("%d is not an armstrong number!\n",d);}

    }
    return 0;
}
