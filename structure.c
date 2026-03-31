// #include <stdio.h>
// typedef struct student
// {
//     int roll;
//     int class;
// } st;

// struct teacher
// {
//     int id;
//     int classess;
// };

// int main()
// {

//     st ashwin;
//     ashwin.roll = 7;
//     ashwin.class = 13;
//     printf("%d%d", ashwin.roll, ashwin.class);

//     struct teacher yam;
//     yam.id = 10;
//     yam.classess = 12;
//     printf("%d%d", yam.id, yam.classess);

//     return 0;
// }

// #include <stdio.h>
//  typedef struct student
//  {
//      int roll;
//      int class;
//  } st;

// struct teacher
// {
//     int id;
//     int classess;
// };

// int main()
// {

//     st ashwin;
//     ashwin.roll = 7;
//     ashwin.class = 13;
//     printf("%d%d", ashwin.roll, ashwin.class);

//     struct teacher yam;
//     yam.id = 10;
//     yam.classess = 12;
//     printf("%d%d", yam.id, yam.classess);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// typedef struct address
// {

//     int houseno;
//     int street;
//     char city[100];
//     char provience[100];

// } add;
// void printer(add person);

// int main()
// {

//     add person[5];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("enter the house number of person %d : \t", i + 1);
//         scanf("%d", &person[i].houseno);

//         printf("enter the street person %d : \t", i + 1);
//         scanf("%d", &person[i].street);

//         printf("enter the city of person %d : \t", i + 1);
//         scanf("%s", person[i].city);

//         printf("enter the provice of person  %d : \t", i + 1);
//         scanf("%s", person[i].provience);
//         printer(person[i]);
//     }

//     return 0;
// }
// void printer(add person)
// {

//     printf(" The house num  of the person is %d \n the street of the person is %d\n the city of the person is %s\n the province of the person is  %s\n", person.houseno, person.street, person.city, person.provience);
//
#include <stdio.h>

int main()
{
    FILE *fp = fopen("data.txt", "a+");

    if (fp == NULL)
    {
        printf("File error!");
        return 1;
    }

    char name[100];
    int count = 0;

    rewind(fp); // pointer लाई सुरुमा लैजाने

    // for loop प्रयोग गरेर count गर्ने
    for (; fgets(name, sizeof(name), fp) != NULL;)
    {
        count++;
    }

    printf("Total names in file = %d\n", count);

    fclose(fp);
    return 0;
}
