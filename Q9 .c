/* Program to Convert even number into its upper nearest odd number
Switch Statement. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any no. : ");
    scanf("%d",&n);
    switch(n%2)
    {
    case 0:
        printf("Upper Nearest odd no. = %d",n+1);
        break;
    case 1:
        printf("Odd Number");
    }
    getch();
    return 0;
}
