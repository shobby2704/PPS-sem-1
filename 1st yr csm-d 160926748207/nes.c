#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("enter the third number\n");
scanf("%d",&c);
if(a>b)
{
    if(a>c)
printf("a is the largest");
else
    printf("c is the largest");
}
else
{
    if(b>c)
printf("b is the lagest");
else
printf("c is the largest");
}
return 0;
}
