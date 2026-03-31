#include <stdio.h>
#include <string.h>
typedef struct bitm_student
{
    char first_name[100];
    char last_name[100];
    int year;
    int month;
    int day;
    float GPA_of_class_10;
    float cgpaof11_12;
    char faculty[100];

} add;

int main()
{

    int choice;
    printf("STUDENT MANAGEMENT SYSTEM :\n\n");

    printf("1.ADD THE STUDENT\n");
    printf("2. DETAIL OF THE STUDENT:\n");
    printf("3. REMOVE THE STUDENT \n");
    printf("4. EXIT\n");

    printf("enter the Choice \t");
    scanf("%d", &choice);

    FILE *student;
    student = fopen("studentmanagement.txt ", "a");

    switch (choice)
    {
    case 1:

        int select;
        // struct bitm_student s1[33];
        add s1[66];

        printf("1.BACHELOR OF INFORMATION TECHNOLOGY (BIT) \n");
        printf("2.BACHELOR OF BUSINESS ADMINSTRATION (BBA)\n");

        printf("select the faclulty for study ");
        scanf("%d", &select);
        if (select != 1 && select != 2)
        {
            printf("enter the  valid number ");
        }
        else
        {
            printf("Enter the first name:\t");
            // scanf("%[^\n]", s1[0].name);
            scanf("%s", s1[0].first_name);

            printf("enter the last name :\t");
            scanf("%s", s1[0].last_name);
            strcat(s1[0].first_name, s1[0].last_name);

            fprintf(student, " full name = %s  \t", s1[0].first_name);

            // for date of birth
            printf("enter the date of birth (english date) year :\t");
            scanf("%d", &s1[0].year);
            printf("enter the month ");
            scanf("%d", &s1[0].month);
            printf("enter the day :");
            scanf("%d", &s1[0].day);
            fprintf(student, "date of birth :  %d-%d-%d\t", s1[0].year, s1[0].month, s1[0].day);

            // scanf("%d", &s1[0].date_of_birth);
            // printf("\n");

            // for GPA OF CLASS 10

            printf("GPA OF CLASS 10:\t");
            scanf("%f", &s1[0].GPA_of_class_10);
            fprintf(student, "GPA OF 10 : %f", s1[0].GPA_of_class_10);
            printf("\n");

            // for cgpa of +2
            printf("CGPA of +2 :\t");
            scanf("%f", &s1[0].cgpaof11_12);
            fprintf(student, " cgpa of +2 = %f\n", s1[0].cgpaof11_12);
            printf("\n");

            if (select == 1)
            {
                printf("CONGRATULATION !!! You join BIT successfully.\n");
            }

            else if (select == 2)
            {
                printf("CONGRTULATION !!! You join BBA successfully.\n");
            }
        }

        break;

    default:
        break;
    }

    return 0;
}