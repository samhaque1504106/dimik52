#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double xc,yc,y,x,r,a,b,c,d;
        scanf("%lf%lf",&xc,&yc);
        scanf("%lf",&r);
        scanf("%lf%lf",&x,&y);
        a = (x-xc)*(x-xc);
        b = (y-yc)*(y-yc);
        c = a +b;
        d = sqrt(c);
        if(d<r)
        {
            printf("The point is inside the circle\n");
        }
        else printf("The point is not inside the circle\n");
    getchar();
    }
    return 0;
}
