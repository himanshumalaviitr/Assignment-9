/* Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    float p=0;
    printf("Enter no. of units:-");
    scanf("%d",&n);
    switch(n<=50)
    {
    case 0:
        n=n-50;
        p=50*0.50;
        switch(n<=100)
        {
        case 0:
            n=n-100;
            p=p+100*0.75;
            switch(n<=100)
            {
            case 0:
                n=n-100;
                p=p+100.0*1.20;
                p=p+n*1.50;
                break;
            default:
                p=p+n*1.20;
            }
            break;
        default:
            p=p+n*0.75;
        }
        break;
    default:
        p=n*0.50;
    }
    printf("Unit charge=%f",p);
    printf("\nAdditional subcharge= %f",p*0.2);
    printf("\nTotal bill= %f\n\n",p+p*0.2);
    getch();
    return 0;
}


//true case 1:
//false case 0:
