// 1. Write a program to print unit digit of a given number
// 2. Write a program to print a given number without its last digit.
// 3. Write a program to swap values of two int variables
// 4. Write a program to swap values of two int variables without using a third variable.
// 5. Write a program to input a three-digit number and display the sum of the digits.
// 6. Write a program which takes a character as an input and displays its ASCII code.
// 7. Write a program to find the position of first 1 in LSB.
// 8. Write a program to check whether the given number is even or odd using a bitwise operator.
// 9. Write a program to print size of an int, a float, a char and a double type variable
// 10. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
// 11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
// 13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

// solution 1 .

// #include<stdio.h>
// int main()
// {
//     int num,unit_digit;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     unit_digit = num%10;
//     printf("The unit digit of a given number is : %d\n",unit_digit);
//     return 0;
// }

// Solution 2.

// #include<stdio.h>
// int main()
// {
//     int num, without_last_digit;
//     printf("Enetr a number :\n");
//     scanf("%d",&num);
//     without_last_digit = num/10;
//     printf("Without last digit of a number is : %d",without_last_digit);
//     return 0;
// }

// Solution 3 .

// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     printf("Enter a two number : \n");
//     scanf("%d%d",&a,&b);
//     printf("Before swaping\na = %d and b = %d\n",a,b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("After swaping\na = %d and b = %d\n",a,b);

// }

// Solution 4 .

// #include<stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter a two number :\n");
//     scanf("%d%d",&a,&b);
//     printf("Before swaping :\n a = %d and b = %d\n",a,b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("After swapng :\n a = %d and b = %d\n",a,b);
//     return 0;
// }

// Solution 5.

// #include<stdio.h>
// int main()
// {
//     int num,s=0,unit_digit,i;
//     printf("Enter a three - digit number :\n");
//     scanf("%d",&num);
//     unit_digit = num %10;
//     s = s + unit_digit;
//     num = num/10;
//     unit_digit = num%10;
//     s = s+unit_digit;
//     num = num/10;
//     unit_digit = num%10;
//     s = s + unit_digit;
//     printf("The sum of three-digit number is : %d",s); 
//     return 0;  

// }

// Solution 5. With another approach.
// #include<stdio.h>
// int main()
// {
//     int num,s=0,unit_digit,i;
//     printf("Enter a three - digit number :\n");
//     scanf("%d",&num);
//     for(i = 1; i<=3;i++){
//         if(i==i)
//         {
//             unit_digit = num%10;
//             s=s+unit_digit;
//             num = num/10;
//         }
//     }
//     printf("The sum of three- digit is : %d \n",s);
// }

// Solution 6.

// #include<stdio.h>
// int main()
// {
//     char c;
//     printf("Enter a character : \n");
//     scanf("%c",&c);
//     printf("ASSCI value is : %d",c);
// }

// Solution 7.

// #include<stdio.h>
// #include<math.h>
// int getFirstSetBitPos(int n)
// {
//     return log2(n & -n) + 1;
// }
// int main()
// {
//     int n;
//     printf("Enter a number : \n");
//     scanf("%d",&n);
//     printf("%u",getFirstSetBitPos(n));
//     // getchar();
//     return 0;
// }

// Solution 8. I am trayingto solve XOR bitwaise operator but not solve i have doubt in this below program

// #include<stdio.h>
// #include<math.h>
// int isEven(int n)
// {
//     if((n ^ 1) == (n + 1))
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     isEven(n)?printf("Even"):printf("odd");
//     return 0;
// }

// Solution 8. trying to simple approach
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     if((num & 1 )== 0)
//         printf("Even");
//     else
//         printf("Odd");
//     return 0;        
// }

// Solution 9.

// #include<stdio.h>
// int main()
// {
//     int a;
//     a=sizeof(a);
//     float b;
//     b = sizeof(b);
//     char c;
//     c = sizeof(c);
//     double e;
//     e = sizeof(e);
//     printf("%d",a);
//     printf("%d",b);
//     printf("%d",c);
//     printf("%d",e);
//     return 0;
// }

// Solution 10 .
// #include<stdio.h>
// int main()
// {
//     int num,removelast_digit,addzero_last;
//     printf("enter a number :");
//     scanf("%d",&num);
//     printf("num = %d\n",num);
//     removelast_digit = num/10;
//     addzero_last = removelast_digit*10;
//     printf("%d",addzero_last);
//     return 0;
// }

// solution 11.

// #include<stdio.h>
// int main()
// {
//     int number, digit;
//     scanf("%d%d",&number,&digit);
//     printf("number = %d and digit = %d\n",number,digit);
//     number = (number*10) + digit;
//     printf("%d",number);
//     return 0;
// }


// Solution 12.

// #include<stdio.h>
// int main()
// {
//     float amount,usd=76.23;
//     printf("Enter an amount :\n");
//     scanf("%f",&amount);
//     float dollar = amount/usd;
//     printf("conversion of amount to dollar is : %.2f",dollar);
//     return 0;

// }

// Solution 13.


