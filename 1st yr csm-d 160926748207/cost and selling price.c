#include <stdio.h>
int main()
{
    int a,b;
    printf ("enter cost and selling price:");
    scanf("%d%d" ,&a,&b);
    if (a>b)
        {
            printf("loss");}
     else
     {
         printf("profit");
     }
     return 0;


}
