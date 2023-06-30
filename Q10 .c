//C program to find all roots of a quadratic equation using switch case

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x1,x2;
    float I;
    printf("Enter a,b and c respectively: ");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
    {
       x1=-b/(2*a);
       x2=x1;
       I=sqrt(-D)/(2*a);
       printf("Roots=%f+i%f,%f-i%f",x1,I,x2,I);
    }
    else if(D)
    {
       x1=(-b-sqrt(D))/(2*a);
       x2=(-b+sqrt(D))/(2*a);
       printf("Roots=%f,%f",x1,x2);
    }
    else
    {
        x1=-b/(2*a);
        x2=x1;
        printf("Roots=%f,%f",x1,x2);
    }
    getch();
    return 0;
}
