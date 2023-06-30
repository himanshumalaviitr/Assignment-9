/* Program to check whether a year is a leap year or not. Using switch
statement*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter year no.:- ");
    scanf("%d",&n);
    switch(n%100)
    {
    case 0:
        switch(n%400)
        {
        case 0:
            printf("leap year");
            break;
        default:
            printf("Non leap year");
        }
        break;
    default:
        switch(n%4)
        {
        case 0:
            printf("leap year");
            break;
        default:
            printf("Non leap year");
        }
    }
    getch();
    return 0;
}
