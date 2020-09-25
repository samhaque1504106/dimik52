#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char ch;
        scanf("%c",&ch);
        if(ch>='A' && ch<='Z'){printf("Uppercase Character\n");}
        else if(ch>='a' && ch<='z'){printf("Lowercase Character\n");}
        else if(ch>='0' && ch<='9'){printf("Numerical Digit\n");}
        else {printf("Special Character\n");}
        getchar();
    }
    return 0;
}
