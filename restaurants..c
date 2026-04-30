#include <stdio.h>
#include <string.h>

void showMenu();

int main()
{
    int choice;
    char *menuitem[] = {"momo", "chowmein", "pizza", "coffee", "burger"};
    int price[] = {100, 120, 250, 80, 200};
    int total_item = 5;

    int item[100];
    int quantity[100];
    int selection = 0; // MOVED HERE — now accessible in all cases

    for (int i = 0; i < 10; i++)
    {
        printf("\n====== RESTAURANT MANAGEMENT SYSTEM ======\n");
        printf("1. SHOW MENU\n");
        printf("2. TAKE ORDER\n");
        printf("3. CALCULATE BILL\n");
        printf("4. EXIT\n");
        printf("ENTER THE CHOICE: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice)
        {
        case 1:
            showMenu();
            break;

        case 2:
        {
            showMenu();
            char determine = 'Y';
            selection = 0; // reset orders

            while (determine == 'Y' || determine == 'y')
            {
                printf("Enter food item number: ");
                scanf("%d", &item[selection]);
                getchar();

                // validate input
                if (item[selection] < 1 || item[selection] > total_item)
                {
                    printf("Invalid item! Try again.\n");
                    continue;
                }

                printf("Enter quantity: ");
                scanf("%d", &quantity[selection]);
                getchar();

                selection++; // increment AFTER saving both item and quantity

                printf("Do you want to continue? (Y/N): ");
                scanf("%c", &determine);
                getchar();
            }
            printf("Order taken successfully!\n");
            break;
        }

        case 3:
        {
            if (selection == 0)
            {
                printf("No orders yet!\n");
                break;
            }

            int total_bill = 0;

            printf("\n========== YOUR ORDER ==========\n");
            printf("%-15s %-10s %-10s %-10s\n", "Item", "Price", "Qty", "Subtotal");
            printf("-----------------------------------------\n");

            for (int i = 0; i < selection; i++)
            {
                int idx = item[i] - 1; // convert 1-based to 0-based index
                int subtotal = price[idx] * quantity[i];
                total_bill += subtotal;

                printf("%-15s %-10d %-10d %-10d\n",
                       menuitem[idx],
                       price[idx],
                       quantity[i],
                       subtotal);
            }

            printf("-----------------------------------------\n");
            printf("TOTAL BILL: Rs. %d\n", total_bill);
            break;
        }

        case 4:
            printf("Thank you! Goodbye!\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}

void showMenu()
{
    char *menuitem[] = {"momo", "chowmein", "pizza", "coffee", "burger"};
    int price[] = {100, 120, 250, 80, 200};

    printf("\n========== MENU ==========\n");
    printf("%-5s %-15s %-10s\n", "No.", "Item", "Price");
    printf("---------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%-5d %-15s Rs.%-10d\n", i + 1, menuitem[i], price[i]);
    }
    printf("---------------------------\n");
}