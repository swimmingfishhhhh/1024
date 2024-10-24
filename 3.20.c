#include <stdio.h>
int main()
{
    float hours,rate,salary;
    while(1)
    {
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%f",&hours);

    if(hours == -1)
        break;

    printf("Enter hourly rate of the worker ($00.00): ");
    scanf("%f",&rate);

    if(hours <= 40)
        salary = hours * rate;
    else
        salary = hours * rate + (hours - 40) * rate / 2;

    printf("Salary is: $%.2f",salary);
    printf("\n\n");
    }
    return 0;
}
