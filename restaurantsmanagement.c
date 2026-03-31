#include <stdio.h>
#include <string.h>
void showMenu();
int main()
{
    int choice;
    int select;
    char order[10];
    int quantity[100];
    int item[100];
    int price[5] = {120, 50, 400, 80, 200};
    int item2[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 10; i++)
    {
        printf("====== RESTAURANTS MANAGEMENT SYSTEM ====== \n");
        printf("1.SHOW MENU\n");
        printf("2.TAKE THE ORDER\n");
        printf("3.CALCULATE BILL \n");
        printf("4.EXIT\n\n\n");
        printf("ENTER THE CHOICE\t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showMenu();
            break;

        case 2:
            showMenu();

            printf(" 1.ENTER THE FOOD ITEM :\n ");
            printf("2.EXIT TO THE MAINMENU \t......");

            scanf("%d", &select);
            switch (select)
            {
            case 1:
                printf("\n\n");
                for (int i = 0; i <= 5; i++)
                {
                    printf("ENTER THE FOOD ITEM :\t");
                    scanf("%d", &item[i]);
                    printf("ENTER THE QUANTITY :\t");
                    scanf("%d", &quantity[i]);
                }

                printf("The item is selected successfully ");
                break;

            case 6:
                goto back_to_the_main;

            default:
                break;
            }

        back_to_the_main:
            break;

        case 3:

        default:
            return 1;

            break;
        }
    }
    return 0;
}

void showMenu()
{
    printf("\n========== RESTAURANT MENU ==========\n");
    printf("1. Momo        Rs 120\n");
    printf("2. Chowmein    Rs 150\n");
    printf("3. Pizza       Rs 400\n");
    printf("4. Coffee      Rs 80\n");
    printf("5. Burger      Rs 200\n");
    printf("=====================================\n");
};
