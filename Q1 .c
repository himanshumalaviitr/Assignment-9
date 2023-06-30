/*Write a program which takes the month number as an input and display
number of days in that month.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter month no.:- ");
    scanf("%d",&n);
    switch(n)
    {
    case 2:
        printf("No. of days = 29\n");
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("No. of days = 31\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("No. of days = 30\n");
    }
    getch();
    return 0;
}
