//     Assignment - 7                          A Job Ready Bootcamp in C++,                                    DSA and IOT MySirG

// Iterative Control Statements (Part - 2)

// 1. Write a program to find the Nth term of the Fibonnaci series.
// 2. Write a program to print first N terms of Fibonacci series
// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.
// 4. Write a program to calculate HCF of two numbers
// 5. Write a program to check whether two given numbers are co-prime
// numbers or not
// 6. Write a program to print all Prime numbers under 100
// 7. Write a program to print all Prime numbers between two given numbers
// 8. Write a program to find next Prime number of a given number
// 9. Write a program to check whether a given number is an Armstrong number
// or not
// 10. Write a program to print all Armstrong numbers under 1000




// Solution 1.

// #include<stdio.h>

// int fib(int n)
// {
//     if(n<=1)
//     {
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }

// int main()
// {
//     int n, result;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     result = fib(n);
//     printf("%d",result);
//     return 0;
// }

// Solution 2.

// #include<stdio.h>
// int main()
// {
    // int n1 =0 , n2 =1, i, number,n3;
    // printf("Enter a number :\n");
    // scanf("%d",&number);
    // printf("%d %d ",n1,n2);
    // for(int i = 2; i< number ; i++)
    // {
    //     n3 = n1+n2;
    //     printf(" %d ",n3);
    //     n1=n2;
    //     n2= n3;

    // }
    // return 0;
// }

// Solution 3.

// #include<stdio.h>
// #include<stdbool.h>
// #include<math.h>
// bool isPerfectSquare(int x)
// {
//     int s  = sqrt(x);
//     return (s*s == x);
// }

// bool isFibonacci(int n)
// {
//     return (isPerfectSquare(5*n*n+4)) || (isPerfectSquare(5*n*n-4));
// }

// int main()
// {
//     int k;
//     printf("Enter a number :\n");
//     scanf("%d",&k);
//     for(int i = 1 ; i<=k ; i++)
//     {
//         if(isFibonacci(i)){
//             printf("%d is fibonacci number\n",i);
//         }else{
//             printf("%d is not fibonacci number\n",i);
//         }
//     }
//     return 0;
// }

// Solution 4.

// #include<stdio.h>
// int main()
// {
//     int num1 , num2,i,hcf;
//     printf("Enter a two number :\n");
//     scanf("%d%d",&num1,&num2);
//     for(int i = 1; i<=num1 && i<=num2; i++)
//     {
//         if(num1%i==0 && num2%i==0 ){
//             hcf = i;
//         }
//     }
//     printf("The hcf of two numbers is : %d",hcf);
    
// }

// LCM OF A NUMBER PROGRAM

// #include<stdio.h>
// int main()
// {
//     int num1 , num2,i,hcf,lcm;
//     printf("Enter a two number :\n");
//     scanf("%d%d",&num1,&num2);
//     for(int i = 1; i<=num1 && i<=num2; i++)
//     {
//         if(num1%i==0 && num2%i==0 ){
//             hcf = i;
//         }
//     }
//     lcm = (num1*num2)/hcf;
//     printf("The lcm of two number is : %d",lcm);
//     return 0;


// }

// Solution 5.

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int num1 , num2,hcf,i;
//     printf("Enter a two number :\n");
//     scanf("%d%d",&num1,&num2);
//     for(int i = 1; i<=num1 && i<=num2; i++)
//     {
//         if(num1%i==0 && num2%i==0)
//             hcf = i;
//     }

//     if(hcf == 1)
//     {
//         printf("Co-prime number.\n");
//     }else{
//         printf("Not a Co-Prime number.\n");
//     }

//     return 0;
// }


//  Solution 6.

// #include<stdio.h>
// int main()
// {
//     int n , i , count;
//     for(int n = 1; n<=100; n++)
//     {
//         count = 0;
//         for (int i = 2; i <=n/2; i++)
//         {
//             if(n%i==0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if(count==0 && n!=1)
//         {
//             printf("%d ",n);
//         }
//     }
//     return 0;
// }

// Solution 7.

// #include<stdio.h>
// int main()
// {
//     int n1,n2, j, i,count;
//     printf("Enter a number :\n");
//     scanf("%d %d",&n1,&n2);
//     for(int j = n1; j < n2; j++ )
//     {
//         count = 0;
//         for(int i = 2; i<=j/2; i++)
//         {
//             if(j%i == 0)
//             {
//                 count++;
//                 break;
//             }
//         }
        
//         if(count == 0 ){
//             printf("%d ",j);
//         }
//     }
//     return 0;
// }

// Solution 8.
// #include<stdio.h>
// int main()
// {
//     int n, j, i,count;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     for(int i = n; i>0; i++ )
//     {
//         count = 0;
//         for(int j = 1; j<=i; j++)
//         {
//             if(i%j == 0)
//             {
//                 count++;
//             }
//         }
        
//         if(count == 2 ){
//             printf("%d ",i);
//             break;
//         }
//     }
//     return 0;
// }

// Solution 9. for checking three digit  Armstrong numbers.

// #include<stdio.h>
// int main()
// {
//     int num,sum = 0,digit_count = 0,last_digit,original_num;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     original_num = num;
//     while(num>0){
//         last_digit = num %10;
//         sum = sum + last_digit*last_digit*last_digit;
//         digit_count++;
//         num = num/10; 
//     }
//     if(original_num == sum)
//     {
//         printf("Armstrong number.\n");
//     }
//     else
//     {
//         printf("Not Armstrong number.\n");
//     }
//     return 0;    
// }

// Solution 9 . for checking n digit Armstrong number.

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int new,num,original_num,remainder,sum =0,digit_count=0,original_remainder,n;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     original_num = num;
//     while(original_num>0)
//     {
        
//         digit_count++;
//         num = num/10;

//     }

//     n = digit_count;

//     while(original_num>0)
//     {
//         original_remainder = original_num %10;
//         sum = sum + pow(original_remainder,n);
//         original_num = original_num/10;
//     }
//     if(original_num == sum)
//     {
//         printf("Armostrong number .\n");
//     }else{
//         printf("Not Armostrong number .\n");
//     }
//     return 0;

// }

// Solution 10.

// #include<stdio.h>
// int main()
// {
//     int n,i,rem,sum = 0;
//     for(int i = 1; i<=1000; i++)
//     {
//         n = i;
//         while(n>0)
//         {
//             rem = n%10;
//             sum = sum + (rem*rem*rem);
//             n = n/10;
//         }
//         if(sum == i)
//         {
//             printf("%d  ",i);
//         }
//         sum = 0;
//     }
// }