/*Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any no: ");
    scanf("%d",&n);
    switch(n<0)
    {
    case 1:
        printf("Positive no=%d",-n);
        break;
    case 0:
        printf("Negative no=%d",-n);
    }
    getch();
    return 0;
}
