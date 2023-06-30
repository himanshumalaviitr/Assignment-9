/*Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter day no.:- ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Hello Monday");
        break;
    case 2:
        printf("Hello Tuesday");
        break;
    case 3:
        printf("Hello Wednesday");
        break;
    case 4:
        printf("Hello Thursday");
        break;
    case 5:
        printf("Hello Friday");
        break;
    case 6:
        printf("Hello Saturday");
        break;
    case 7:
        printf("Hello Sunday");
        break;
    default:
        printf("Enter valid no.");
    }
    getch();
    return 0;
}
