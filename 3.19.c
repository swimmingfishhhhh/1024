#include <stdio.h>
int main()
{
    float principal,rate,days,interest;
    while(1)
    {
    printf("Enter loan principal (-1 to end): ");
    scanf("%f",&principal);

    if(principal == -1)
        break;

    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter term of the loan in days: ");
    scanf("%f",&days);
    interest = principal * rate * days / 365;
    printf("The interest charge is $%.2f",interest);
    printf("\n\n");
    }
    return 0;
}
