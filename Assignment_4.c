//                 Assignment - 4                              A Job Ready Bootcamp in C++, DSA and IOT MySirG
//                                      Control Statements
                                    
// 1. Write a program to print MySirG 5 times on the screen
// 2. Write a program to print the first 10 natural numbers.
// 3. Write a program to print the first 10 natural numbers in reverse order
// 4. Write a program to print the first 10 odd natural numbers
// 5. Write a program to print the first 10 odd natural numbers in reverse order.
// 6. Write a program to print the first 10 even natural numbers
// 7. Write a program to print the first 10 even natural numbers in reverse order
// 8. Write a program to print squares of the first 10 natural numbers
// 9. Write a program to print cubes of the first 10 natural numbers
// 10. Write a program to print a table of 5.

// Solution 1.

// #include<stdio.h>
// int main()
// {
//     int i;
//     for(int i = 1; i<=5; i++)
//     {
//         printf("MySirG\n");
//     }
//     return 0;
// }

// Solution 2.

// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("The firts 10 natural numbers is :\n");
//     for(int i = 1; i<=10; i++)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

// Solution 3.

// #include<stdio.h>
// int main()
// {
//     int i ;
//     printf("first 10 naturals numbers in reverse order :\n");
//     for(int i =10; i>=1; i--)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

// Solution 4.

// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("first 10 odd natural numbers :\n");
//     for(int i = 1; i<=20; i++)
//     {
//         if(i%2!=0)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// Solution 5.

// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("First 10 odd naturals numbers in reverse order :\n");
//     for(int i = 20; i>=1; i--)
//     {
//         if(i%2!=0)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// Solution 6.

// #include<stdio.h>
// int main()
// {
//     int i ;
//     printf("first 10 even natural numbers :\n");
//     for(int i =1; i<=10; i++)
//     {
//         printf("%d ",2*i);
//     }
//     return 0;
// }

// Solution 7.

// #include<stdio.h>
// int main()
// {
//     int i ;
//     printf("first 10 even naturals numbers in reverse order :\n");
//     for(i=10;i>=1;i--)
//     {
//         printf("%d ",2*i);
//     }
//     return 0;
// }

// Solution 8.

// #include<stdio.h>
// int main()
// {
//     int i ;
//     printf("Square of first 10 naturals numbers :\n");
//     for(int i = 1; i<=10; i++)
//     {
//         printf("%d ",i*i);
//     }
//     return 0;
// }

// Solution 9.

// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("Cubes of first 10 naturals numbers :\n");
//     for(int i = 1; i<=10; i++)
//     {
//         printf("%d ",i*i*i);
//     }
//     return 0;
// }

// Solution 10.

// #include<stdio.h>
// int main()
// {
//     int i, n=5 ;
//     printf("Table of 5 :\n");
//     for(int i =1; i<=10;i++)
//     {
//         printf("%d x %d = %d \n",n,i, n*i);
//     }
//     return 0;
// }