#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int l;
    float d;
    printf("enter the 1st no:");
    scanf("%d",&a);
    printf("enter the 2nd no:");
    scanf("%d",&b);
    printf("enter the 3rd no;");
    scanf("%d",&c);
    l=a+b+c;
    d=l/3;
    printf("the avg is:%f",d);
    return 0;

}
