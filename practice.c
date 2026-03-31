// // function call by value and call by refrence
// #include <stdio.h>
// void printsquare(int a);

// int main()
// {

//     int num;

//     printf("enter the number : ");
//     scanf("%d", &num);

//     printsquare(num);
//     // CALL BY VALUE :
//     printf("the number is %d", num);
//     return 0;
// }
// void printsquare(int a)
// {
//     a = a * a * a;
//     printf("the cube of the number is %d", a);
// }

// /////////call by refrence

// #include <stdio.h>

// void printsquare(int *a);

// int main()
// {

//     int num;

//     printf(" enter the number :");
//     scanf("%d", &num);

//     printsquare(&num);
//     printf("the number is %d", num);

//     return 0;
// }

// void printsquare(int *a)
// {

///  printf("the square of the number is %d", *a);
// }

// #include <stdio.h>
// void swwap(int *x, int *y);
// void swap(int a, int b);
// int main()
// {

//     int x = 4;
//     int z = 2;

//     swap(x, z);

//     int a = 10;
//     int b = 20;

//     swap(&a, &b);

//     printf("a is %d", a);
//     printf("b is %d", b);
//     return 0;
// }
// void swap(int a, int b)
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     printf("the a is %d", a);
//     printf("the b is %d", b);
// }
// void swwap(int *x, int *y)
// {
//     int *c;
//     *c = *x;
//     *x = *y;
//     *y = *c;
//     printf("x is %d", *x);
//     printf("y is %d", *y);
// }

// #include <stdio.h>

// int main()
// {

//     int num[5];

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &num[i]); /* code */
//     }

//     int large = num[0];
//     int small = num[0];
//     int sum = 0;
//     float avg;
//     for (int j = 0; j < 5; j++)
//     {
//         sum += num[j];
//         avg = sum / 5;
//         if (num[j] > large)
//         {
//             large = num[j];
//         }
//         if (num[j] < small)
//         {

//             small = num[j]; /* code */
//         }
//     }

//     printf("the smallest number is %d", small);
//     printf("the largest number is %d", large);
//     printf("the average is %f", avg);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int num[5];

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &num[i]);
//     }
//     int largenum = num[0];
//     int secondlarge = num[0];

//     for (int i = 0; i < 5; i++)
//     {

//         if (num[i] > largenum)
//         {
//             largenum = num[i];
//         }
//         if (num[i] > secondlarge && num[i] < largenum)
//         {
//             secondlarge = num[i];
//         }
//     }
//     printf("the large number is %d", largenum);
//     printf("the second large number is %d", secondlarge);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     for (int i = 5; i >= 0; i--)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int arr[5];
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("the numbers are : %d %d %d ", arr[0], arr[1], arr[2]);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("enter the num : \n");
//     scanf("%d", &num);

//     for (int i = 0; i < 11; i++)
//     {
//         printf("%d*%d = %d \n", num, i, num * i);
//     }

//     return 0;
// }
// #include <stdio.h>

// void addnum(int a, int b);

// int main()
// {

//     int sum = addnum(6, 7);
//     printf("the sum is %d," sum);

//     return 0;
// }
// void addnum(int a, int b)
// {

//     int sum = a + b;
// }

// factorial with recursivefunction

// #include <stdio.h>
// int sum(int a);

// int main()
// {
//     int num;
//     printf("enter the number :");
//     scanf("%d", &num);

//     int result = sum(num);
//     printf("the sum is %d", result);

//     return 0;
// }
// int sum(int a)
// {

//     if (a == 0)

//         return 0;

//     else
//         return a + sum(a - 1);
// }

// #include <stdio.h>

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {

//             printf("%d", j);
//             printf("\t");
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int fac(int a);
// int main()
// {
//     int num;

//     printf("enter num");
//     scanf("%d", &num);

//     int result = fac(num);

//     printf("the result is %d", result);

//     return 0;
// }

// int fac(int a)
// {
//     if (a == 0)
//         return 1;
//     else
//         return a * fac(a - 1);
// }
