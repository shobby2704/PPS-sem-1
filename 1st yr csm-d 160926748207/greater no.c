#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter 3 numbers:");
    scanf("%d%d%d%" ,&a,&b,&c);
    if(a>b && a>c)
    {
        printf( "%d is gratest",a);
    }
        else if ( b>c && b>a)
    {
        printf ("%d is gratest",b);
    }
    else
    {
        printf("%d is the gratest",c);

    }
    return 0;
    }


