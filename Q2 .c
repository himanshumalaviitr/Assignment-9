/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float n,m;
    char a;
    while(1)
    {
     printf("\nChoose any one:-\n");
     printf("a. Addition\nb. Subtraction\nc. Multiplication\n");
     printf("d. Division\ne. Exit\n");
     scanf("%c",&a);
     switch(a)
     {
     case 'a':
         printf("Enter two no.:-\n");
         scanf("%f%f",&n,&m);
         printf("%f+%f= %f\n",n,m,n+m);
         break;
     case 'b':
         printf("Enter two no.:-\n");
         scanf("%f%f",&n,&m);
         printf("%f-%f= %f\n",n,m,n-m);
         break;
     case 'c':
         printf("Enter two no.:-\n");
         scanf("%f%f",&n,&m);
         printf("%f*%f= %f\n",n,m,n*m);
         break;
     case 'd':
         printf("Enter two no.:-\n");
         scanf("%f%f",&n,&m);
         printf("%f/%f= %f\n",n,m,n/m);
         break;
     case 'e':
         exit(0);
     }
    }
    getch();
    return 0;
}
