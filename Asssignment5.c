//                     Assignment - 5                      A Job Ready Bootcamp in C++, DSA and IOT MySirG
//                                 More on Iterative Control Statements

// 1. Write a program to print MySirG N times on the screen
// 2. Write a program to print the first N natural numbers.
// 3. Write a program to print the first N natural numbers in reverse order
// 4. Write a program to print the first N odd natural numbers
// 5. Write a program to print the first N odd natural numbers in reverse order.
// 6. Write a program to print the first N even natural numbers
// 7. Write a program to print the first N even natural numbers in reverse order
// 8. Write a program to print squares of the first N natural numbers
// 9. Write a program to print cubes of the first N natural numbers
// 10. Write a program to print a table of N.


// Solution 1.

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     for(int i = 1; i<=n; i++)
//     {
//         printf("MySirG\n");
//     }
//     return 0;
// }

// Solution 2.

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     printf("The firts 10 natural numbers is :\n");
//     for(int i = 1; i<=n; i++)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

// Solution 3.

// #include<stdio.h>
// int main()
// {
//     int i,n ;
//     printf("Enter a number :\n");
//     printf("first 10 naturals numbers in reverse order :\n");
//     scanf("%d",&n);
//     for(int i = n; i>=1; i--)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

// Solution 4.

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("Enter a number :\n");
//     printf("first 10 odd natural numbers :\n");
//     scanf("%d",&n);
//     for(int i = 1; i<=n; i++)
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
//     int i,n;
//     printf("Enter a nmber :\n");
//     printf("First 10 odd naturals numbers in reverse order :\n");
//     scanf("%d",&n);
//     for(int i = n; i>=1; i--)
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
//     int i,n ;
//     printf("Enter a number :\n");
//     printf("first 10 even natural numbers :\n");
//     scanf("%d",&n);
//     for(int i =1; i<=n; i++)
//     {
//         printf("%d ",2*i);
//     }
//     return 0;
// }

// Solution 7.

// #include<stdio.h>
// int main()
// {
//     int i ,n;
//     printf("Enter a number :\n");
//     printf("first 10 even naturals numbers in reverse order :\n");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         printf("%d ",2*i);
//     }
//     return 0;
// }

// Solution 8.

// #include<stdio.h>
// int main()
// {
//     int i ,n;
//     printf("Enter a number :\n");
//     printf("Square of first 10 naturals numbers :\n");
//     scanf("%d",&n);
//     for(int i = 1; i<=n; i++)
//     {
//         printf("%d ",i*i);
//     }
//     return 0;
// }

// Solution 9.

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("Enter a number :\n");
//     printf("Cubes of first 10 naturals numbers :\n");
//     scanf("%d",&n);
//     for(int i = 1; i<=n; i++)
//     {
//         printf("%d ",i*i*i);
//     }
//     return 0;
// }

// Solution 10.

// #include<stdio.h>
// int main()
// {
//     int i, n ;
//     printf("Enter a number :\n");
//     printf("Table of 5 :\n");
//     scanf("%d",&n);
//     for(int i =1; i<=10;i++)
//     {
//         printf("%d x %d = %d \n",n,i, n*i);
//     }
//     return 0;
// }