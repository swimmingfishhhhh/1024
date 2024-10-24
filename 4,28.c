#include <stdio.h>

int main() {
    int people;
    double salary, hourly_wage, hours_worked, gross_sales, item_rate, items_produced, weekly_pay;

    while (1) {
        // 輸入員工的類型
        printf("\n輸入員工的類型 (1:經理, 2:按時計酬員工, 3:提成員工, 4:計件工人, 0:退出): ");
        scanf("%d", &people);

        if (people == 0) {
            // 如果輸入0，程式退出
            break;
        }

        switch (people) {
            case 1:
                printf("輸入經理的每週固定薪資: ");
                scanf("%lf", &salary);
                weekly_pay = salary;
                printf("經理的每週工資為: %.2f\n", weekly_pay);
                break;

            case 2:
                printf("輸入按時計酬員工的時薪: ");
                scanf("%lf", &hourly_wage);
                printf("輸入按時計酬員工的工作小時數: ");
                scanf("%lf", &hours_worked);
                if (hours_worked > 40) {
                    weekly_pay = 40 * hourly_wage + (hours_worked - 40) * hourly_wage * 1.5;
                } else {
                    weekly_pay = hours_worked * hourly_wage;
                }
                printf("按時計酬員工的每週工資為: %.2f\n", weekly_pay);
                break;

            case 3:
                printf("輸入提成員工的總銷售額: ");
                scanf("%lf", &gross_sales);
                weekly_pay = 250 + 0.057 * gross_sales;
                printf("提成員工的每週工資為: %.2f\n", weekly_pay);
                break;

            case 4:
                printf("輸入計件工人每件商品的工資: ");
                scanf("%lf", &item_rate);
                printf("輸入計件工人生產的商品數量: ");
                scanf("%lf", &items_produced);
                weekly_pay = item_rate * items_produced;
                printf("計件工人的每週工資為: %.2f\n", weekly_pay);
                break;

            default:
                printf("錯誤，請重新輸入。\n");
                break;
        }
    }

    return 0;
}
