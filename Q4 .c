/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;
    char a;
    while(1)
    {
     printf("choose any one :-\n");
     printf("a. check for isosceles triangle\n");
     printf("b. check  for right angled triangle\n");
     printf("c. check for equilateral triangle\n");
     printf("d. Exit\n");
     scanf("%c",&a);
     switch(a)
     {
      case 'a':
          printf("Enter sides of triangle:-");
          scanf("%d%d%d",&x,&y,&z);
          if(x==y||y==z||z==x)
            printf("\nthese are sides of Isosceles Triangle\n\n");
          else
            printf("\nthese are NOT sides of Isosceles Triangle\n\n");
          break;
      case 'b':
          printf("Enter sides of triangle:-");
          scanf("%d%d%d",&x,&y,&z);
          if(x*x==y*y+z*z||y*y==z*z+x*x||z*z==x*x+y*y)
            printf("\nthese are sides of Right Angled Triangle\n\n");
          else
            printf("\nthese are NOT sides of Right Angled Triangle\n\n");
          break;
      case 'c':
         printf("Enter sides of triangle:-");
          scanf("%d%d%d",&x,&y,&z);
          if(x==y&&y==z)
            printf("\nthese are sides of Equilateral Triangle\n\n");
          else
            printf("\nthese are NOT sides of Equilateral Triangle\n\n");
          break;
      case 'd':
        exit(0);
      default:
        printf("\nEnter valid\n\n");
     }
    }
    getch();
    return 0;
}
