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
    char *menuitem[100];
    menuitem[0] = "Momo";
    menuitem[1] = "chowmein";
    menuitem[2] = "pizza";
    menuitem[3] = "coffee";
    menuitem[4] = "burger";
    // menuitem[6]
    // menuitem[7]
    // menuitem[8]
    // menuitem[9]

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
            printf("\n\n");
            break;

        case 2:
            showMenu();

            char determine = 'Y';
            int selection = 0;

            while (determine == 'Y' || determine == 'y')
            {
                printf("enter the food item\t  ");
                scanf("%d", &item[selection]);
                getchar();

                printf("enter the quantity :\t");
                scanf("%d", &quantity[selection]);
                getchar();

                printf("DO YOU WANT TO CONTINUE ?\t");
                scanf("%c", &determine);
                selection++;
            }

            if (determine == 'n' || determine == 'N')

            {
                printf(" THANK YOU FOR THE ORDER :) \n");
                printf("THE ITEM IS SELECTED   SUCCESSFULLY ");
            }

            break;
        case 3:
            int j = 0;

            printf("you order these  items\n :");

            // for (int i = 0; i <= selection; i++)
            // item [i];
            int i = 0;
            while (item[i] == *menuitem[i])

            {
                printf("%s", menuitem[i]);
                i++;
            }

            // {
            //     printf("%")
            // }

            // for (int  i = 0; i < selection; i++)
            // {
            //     printf(" %s\t    %d\t\n", menuitem[selection], quantity[selection]);

            // }

            // case 3:
            //     printf("you order this item :\n ");

            //     printf("ITEMS :\t QUANTITY : \n");
            //     int i = 0;

            //     // for (int i = item[0]; i <= selection; i++)
            //     // {
            //     //     printf(" %s\t    %d\t\n", menuitem[selection], quantity[selection]);
            //     // }
            //     // printf("\n\n\n\n\n");

            // break;

        case 4:
            return 1;

        default:
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
