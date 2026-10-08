 #include <stdio.h>
 int main()
 {
     float l,c,f;
     printf("enter the radius: ");
     scanf("%f",&l);
     c=l*l*3.14;
     f=2*3.14*l;
     printf("the area is :%f",c);
     printf("the perimeter is:%f",f);
     return 0;
 }
