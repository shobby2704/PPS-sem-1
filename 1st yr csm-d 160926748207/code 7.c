#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;
    float l;
    float d;
    printf("enter the 1st principle:");
    scanf("%f",&a);
    printf("enter the interest rate :");
    scanf("%f",&b);
    printf("enter the the time in year;");
    scanf("%f",&c);
    l=a*b*c;
    d=l/100;
    printf("the simple interest:%f",d);
    return 0;

}
