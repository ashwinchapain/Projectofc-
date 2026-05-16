#include <stdio.h>
#include <string.h>
typedef struct student_information
{
    char name[50];
    char date_of_birth[50];
    char Student_Address[50];

} information;

int main()
{
    FILE *fptr;

    int choice, i;
    i = 1;
    int j = 1;
    information info[33];

    printf("----------STUDENT MANAGEMENT SYSTEM----------\n\n");

    printf("1.ADD THE STUDENT\n");
    printf("2. DETAIL OF THE STUDENT:\n");
    printf("3. REMOVE THE STUDENT \n");
    printf("4. EXIT\n");

    printf("enter the Choice \t");
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
    case 1:
        fptr = fopen("studentinformation.txt", "a");
        char menu = 'y';
        fprintf(fptr, "student name\t studnet id\t student date of birth\t student Address\n ");

        while (menu == 'y' || menu == 'Y')
        {
            fptr = fopen("studentinformation.txt", "a");

            printf("enter the student name :\t ");
            fgets(info[i].name, sizeof(info[i].name), stdin);

            printf("enter the date of birth of the student \t");
            fgets(info[i].date_of_birth, 50, stdin);

            printf("enter the address of the student : \t");
            fgets(info[i].Student_Address, 50, stdin);

            i++;
            if (i + 1)
            {
                printf("CONGRATULATION YOU  GOT ADDMISSION.\n");
                printf("dear %s your id is %d \n", info[i - 1].name, i);
                fprintf(fptr, "%s\t %d\t %s\t %s\t", info[i - 1].name, i - 1, info[i - 1].date_of_birth, info[i - 1].Student_Address);

                printf("DO YOU WANT TO ADDMISSION ANOTHER STUDENT (Y/N)?\t");
                scanf("%c", &menu);
                // fprintf(fptr, "student name\t studnet id\t student date of birth\t student Address\n ");

                if (menu == 'n' || menu == 'N')
                {
                    printf("thank you \n");
                    printf("the admission has bes succesfully \n");
                }
                getchar();
            }
        }
        fclose(fptr);
        break;

    case 2:
        i - 1;
        for (int l = 0; l <= i; l++)
        {

            fptr = fopen("studentinformation.txt", "r");
            fscanf(fptr, "%s %d %s %s ", info[i].name, &i, info[i].date_of_birth, info[i].Student_Address);
        }

        int find = 0;
        int found = 0;

        printf("ENTER THE STUDENT ID \t");
        scanf("%d", &find);
        getchar();
        for (int k = 0; k <= i; k++)
        {
            if (k == find)
            {
                printf("student name = %s\n studentid = %d\n student date of birth = %s\n student Address = %s\n", info[k].name, k, info[k].date_of_birth, info[k].Student_Address);
            }
            found = 1;
            break;
        }
        if (found == 0)
        {
            printf("student doesnot exit in this id \n");
        }

    default:
        break;
    }
    return 0;
}