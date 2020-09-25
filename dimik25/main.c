#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int lcm,rem,num1,num2,n1,n2;
        scanf("%d%d",&num1,&num2);
        if(num1==num2){printf("LCM = %d\n",num1);}
        else
        {
           n1 = num1;
        n2 = num2;
        while(n2!=0)
        {
            rem = n1%n2;
            n1 = n2;
            n2 = rem;

        }
        lcm = (num1*num2)/n1;
        printf("LCM = %d\n",lcm);
        }

    }

    return 0;
}
