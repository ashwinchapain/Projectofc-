#include <stdio.h>
void showMenue();

int main()
{

    int num;

    char determine = 'Y';
    int i = 0;
    int item[100];
    int quantity[100];

    while (determine == 'Y' || determine == 'y')
    {
        printf("enter the food item\t  ");
        scanf("%d", &item[i]);
        getchar();

        printf("enter the quantity :\n");
        scanf("%d", &quantity[i]);
        getchar();

        printf("Do you want to continue ?\t");
        scanf("%c", &determine);
        i++;
    }

    if (determine == 'n' || determine == 'N')
        ;
    {
        printf("thank you for your order :) \n");
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