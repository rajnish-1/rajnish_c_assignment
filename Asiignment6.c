//                         Assignment - 6.                    A Job Ready Bootcamp in C++, DSA and IOT MySirG
//                                             Use any loop

// 1. Write a program to calculate sum of first N natural numbers
// 2. Write a program to calculate sum of first N even natural numbers
// 3. Write a program to calculate sum of first N odd natural numbers
// 4. Write a program to calculate sum of squares of first N natural numbers
// 5. Write a program to calculate sum of cubes of first N natural numbers
// 6. Write a program to calculate factorial of a number
// 7. Write a program to count digits in a given number
// 8. Write a program to check whether a given number is a Prime number or
// not
// 9. Write a program to calculate LCM of two numbers
// 10. Write a program to reverse a given number       

// Solution 1.

// #include<stdio.h>
// int main()
// {
//     int n,s=0,i;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     for(int i = 1 ; i<=n ; i++)
//     {
//         s = s+i;
//     }
//     printf("The sum of first %d naturals number is : %d \n",n,s);
//     return 0;

// }

// Solution 2.

// #include<stdio.h>
// int main()
// {
//     int n,i,s=0;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     for(int i =1 ; i<=n ;i++)
//     {
//         if(i%2==0){
//             s=s+i;
//         }
//     }
//     printf("The sum of first %d even natural numbers is : %d \n",n,s);
//     return 0;
// }

// Solution 3.

// #include<stdio.h>
// int main()
// {
//     int n,i,s = 0;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     for(int i =1 ; i<=n ; i++)
//     {
//         if(i%2!=0)
//         {
//             s = s+i;
//         }
//     }
//     printf("The sum of fiest %d odd natural number is :  %d\n",n,s);
//     return 0;

// }

// Solution 4.

// #include<stdio.h>
// int main()
// {
//     int n,i,s = 0;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     for(int i =1 ; i<=n ; i++)
//     {
//         s = s + (i*i); 
//     }  
//     printf("The square of first %d  natural number is :  %d\n",n,s);
//      return 0;

// }

// Solution 5.

// #include<stdio.h>
// int main()
// {
//     int n,i,s = 0;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     for(int i =1 ; i<=n ; i++)
//     {
//         s = s + (i*i*i); 
//     }  
//     printf("The square of first %d  natural number is :  %d\n",n,s);
//      return 0;

// }

// Solution 6.

// #include<stdio.h>
// int main()
// {
//     int n,i,fact = 1;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     for(int i = n ; i>=1; i--)
//     {
//         fact = fact * i;
//     }
//     printf("The factorial of  %d  is : %d \n",n,fact);
//     return 0;

// }

// Solution 7.

// int main()
// {
//     int n,i,digit,unit_digit,count_digit ;
//     printf("Enter a digit number :\n");
//     scanf("%d",&digit);
//     scanf("%d",&n);
//     for(int i = 1 ; i<= n; i++)
//     {
//         unit_digit = digit%10;
//         count_digit =  i;
//         digit = digit/10;
        
//     }
//     printf("The number of digits in a given number is : %d",count_digit);

//     return 0;

// }


// Solution 8.

// #include<stdio.h>
// int main()
// {
//     int n,i,prime = 0;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     if(n==0||n==1)
//     {
//         prime = 1;
//     }
//     for(int i = 2; i<=n/2; i++)
//     {
//         if(n%i==0)
//         {
//             prime = 1;
//             break;

//         }
//     }
//     if(prime == 0)
//     {
//         printf("%d is a prime number.",n);
//     }else{
//         printf("%d is not a prime number.",n);
//     }
// }

// Solution .10

// #include<stdio.h>
// int main()
// {
//     int n,remainder,reverse=0;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         remainder = n%10;
//         reverse = reverse*10 + remainder;
//         n = n/10;
//     }
//     printf("The reverse of a given number is : %d",reverse);
//     return 0;
// }