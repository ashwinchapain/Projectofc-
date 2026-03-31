// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     FILE *fptr;
//     fptr = fopen("student.txt", "w");

//     char name[100];
//     int class;
//     float cgpa;

//     printf("enter the name :  \n ");
//     scanf("%s", name);
//     printf("enter the class : \n");
//     scanf("%d", &class);
//     printf("enter the cgpa: ");
//     scanf("%f", &cgpa);

//     fprintf(fptr, "student name = %s", name);
//     fprintf(fptr, "class =  %d", class);
//     fprintf(fptr, "class = %f", cgpa);

//     return 0;
// }

// Q.3: Program to write n person's name, address, and telno in a data file
// and display them reading the successive data from the file in proper format

// #include <stdio.h>
// #include <string.h>

// typedef struct information
// {
//     char name[100];
//     char address[100];
//     int telephone;

// } in;

// int main()
// {
//     int num;
//     printf("enter person's information you want to sore ");
//     scanf("%d", &num);

//     in person[num];

//     FILE *fptr;

//     for (int i = 0; i < num; i++)
//     {

//         printf("enter the person %d name \t", i + 1);
//         fgets(person[i].name, 100, stdin);

//         printf("enter the person's %d address\t ", i + 1);
//         fgets(person[i].address, 100, stdin);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num;
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {

//         printf("enter the number :");
//         scanf("%d", &arr[i]); /* code */
//     }

//     for (int i = 0; i < 5; i++)
//     {

//         {
//             if (arr[i] % 2 != 0)
//             {
//                 printf("%d", arr[i]);
//             }
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int aarr(int arr[], int size);

// int main()
// {
//     int arr[5];

//     printf("enter the array : ");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int result = aarr(arr, 5);

//     printf("the old number in arr is %d", result);

//     return 0;
// }

// int aarr(int arr[], int size)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] % 2 != 0)
//             return arr[i];
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float *prize;

//     prize = (float *)malloc(5 * sizeof(float));

//     prize[0] = 10;
//     prize[1] = 20;
//     prize[2] = 230;
//     prize[3] = 56;
//     prize[4] = 77;

//     return 0;
// }

//
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int num;
//     printf("enter the number :");
//     scanf("%d", &num);

//     int *ptr;

//     ptr = (int *)calloc(num, sizeof(int));

//     for (int i = 0; i < num; i++)
//     {
//         printf("%d", ptr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     int num;
//     printf("enter the number :");
//     scanf("%d\n", &num);
//     ptr = (int *)calloc(num, sizeof(int));

//     for (int i = 0; i < num; i++)
// //     {
// //         printf("%d", ptr[i]);
// //     }

// //     free(ptr);
// //     ptr = (int *)calloc(2, sizeof(int));

// //     for (int i = 0; i < 2; i++)

// //     {
// //         printf("%d\n", ptr[i]);
// //     }

// //     return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {

//     int *ptr;
//     int num;

//     printf("enter the number :");

//     scanf("%d", &num);

//     ptr = (int *)calloc(num, sizeof(int));
//     printf("enter the 5 numbers :");

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }

//     ptr = realloc(ptr, 8);

//     printf("enter the 8 numbers :");
//     for (int i = 0; i < 8; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 8; i++)
//     {
//         printf(" the number%d  is %d\n", i, ptr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// // // no parameter and no argument no retrun type
// // void add()
// // {
// //     int a = 5;
// //     int b = 6;
// //     printf("%d", a + b);
// // }
// // no parameter but return type
// // int add()
// // {
// //     int a = 10;
// //     int b = 20;
// //     return a + b;
// // }
// // no return type but parameter
// // void add(int a, int b)
// // {
// //     int sum = a + b;
// //     printf("%d", sum);
// // }

// // parameter + return type
// int add(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int a, b;
//     a = 10;
//     b = 20;
//     int result = add(a, b);
//     printf("%d", result);

//     return 0;
// // }
// #include <stdio.h>
// void add(int *x)
// {
//     *x = 20;
//     printf("inside the function %d", *x);
// }
// int main()
// {
//     int x = 10;
//     add(&x);
//     printf(" inside the main %d", x);

//     return 0;
// }

// #include <stdio.h>
// typedef struct student {
//     char name[40];
//     int roll;

// }st;

// int main() {
//     int num;
//     printf("how many student record do you want to savve :");
//     scanf("%d",&num);

//     st student[num];

//     printf("enter the name  :");
//     fgets (student[num].name,40,stdin);

//     return 0;
// }

// #include <stdio.h>
// typedef struct student
// {
//     char name[30];
//     int roll;
// } st;

// int main()
// {
//     int num;
//     FILE *fptr;
//     printf("enter the number of student do you want to save ");
//     scanf("%d", &num);
//     getchar();
//     st information[num];

//     printf("enter the %d num name :\n", num);
//     for (int i = 0; i < num; i++)
//     {
//         fgets(information[i].name, 30, stdin);
//     }
//     printf("enter the %d roll : \n", num);
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d", &information[i].roll);
//     }

//     fptr = fopen("information.txt", "w");
//     for (int i = 0; i < num; i++)
//     {
//         fprintf(fptr, "%s %d", information[i].name, information[i].roll);
//     }
//     fclose(fptr);
//     char name[30];
//     int roll;

//     fptr = fopen("information.txt", "r");
//     printf("name \t  roll \n");
//     for (int i = 0; i < num; i++)
//     {
//         fscanf(fptr, "%s %d", name, &roll);

//         printf("%s\t  %d\n", name, roll);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int sum = 1;

//     for (int i = 1 ; i < 5; i++)
//     {
//         sum *= i;
//     }
//     printf("the sum is %d", sum);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = 5; j > i; j--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// // Differentiate between program file and data file. Write a C program to create a data file "record.txt" to store name, age and height of students as long as user wants. Also read the data from the file and display the records of those students whose height is more than 5 feet.

// #include <stdio.h>
// #include <string.h>

// typedef struct student
// {
//     char name[30];
//     int age;
//     float height;

// } sp;

// int main()

// {
//     char name[30];
//     int age;
//     float height;
//     FILE *fptr;
//     int num;

//     printf("enter the student size :\t");
//     scanf("%d", &num);
//     getchar();
//     sp informatioin[num];

//     printf("enter the  student name:");
//     for (int i = 0; i < num; i++)
//     {
//         fgets(informatioin[i].name, 30, stdin);
//     }

//     printf("enter the  student age :");
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d", &informatioin[i].age);
//     }

//     printf("enter the  student height :");
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%f", &informatioin[i].height);
//     }

//     fptr = fopen("record.txt", "w");
//     for (int i = 0; i < num; i++)
//     {
//         fprintf(fptr, "%s %d %f ", informatioin[i].name, informatioin[i].age, informatioin[i].height);
//     }

//     fclose(fptr);

//     fptr = fopen("record.txt", "r");
//     sp readback[num];

//     for (int i = 0; i < num; i++)

//     {
//         fscanf(fptr, "%s %d %f ", readback[i].name, &readback[i].age, &readback[i].height);
//     }

//         for (int i = 0; i < num; i++)
//         {
//             if (readback[i].height > 5)

//             {
//                 printf("%s\t", readback[i].name);
//             }

//     }

//     fclose(fptr);

//     return 0;
// }

// #include <stdio.h>
// int fr(int a);
// int main()
// {
//     int n;
//     printf("enter the number :\t");
//     scanf("%d", &n);
//     fr(n);
//     return 0;
// }
// // int fr(int a)
// {
//     ;
//     if (a == 0)
//         return 1;
//     else

//         fr(a - 1);
//     printf("%d", a);
// }
