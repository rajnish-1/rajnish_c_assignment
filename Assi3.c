//                              Assignment - 3          A Job Ready Bootcamp in C++, DSA and IOT MySirG


                                                        // Decision Control Statements


/*1. Write a program to check whether a given number is positive or non-positive.

2. Write a program to check whether a given number is divisible by 5 or not

3. Write a program to check whether a given number is an even number or an odd
number.

4. Write a program to check whether a given number is an even number or an odd
number without using % operator.

5. Write a program to check whether a given number is a three-digit number or not.

6. Write a program to print greater between two numbers. Print one number of both are
the same.

7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots

8. Write a program to check whether a given year is a leap year or not.

9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.

10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.

11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.

12. Write a program to check whether a given alphabet is in uppercase or lowercase.

13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

15. Write a program to check whether a given number is positive, negative or zero.

16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.

17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.

18. Write a program which takes the month number as an input and display number of
days in that month
*/

// Solution 1.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non-Positive");
    }
    return 0;

}
*/

// Solution 2.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("%d is divisible by 5 \n",num);
    }
    else
    {
        printf("%d is not divisible by 5",num);
    }
    return 0;
}
*/

// Solution 3.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is an Even number \n",num);
    }
    else
    {
        printf("%d is a Odd number \n",num);
    }
    return 0;
}
*/

// Solution 4 .
// firstt approach
/*
#include<stdio.h>
int Eeven(int x)
{ 
    int y = 2*x;
    return y;
}
int odd(int x)
{
    int z = (2*x-1);
    return z;
}

int main()
{
    int n,k,m;
    printf("Enter a number : \n");
    scanf("%d",&n);
    
    k = Eeven(n);
    m = odd(n);
    printf("%d is even number \n",k);
    printf("%d is odd number \n",m);
    return 0;

}*/

// second approach by bitwise operator
/*
int isEven(int num)
{
    return (!(num&1));
}

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    isEven(x) ? printf("Even number \n") : printf("Odd number\n");
    return 0;


}*/

// Third approach
/*
int isEven(int n)
{
    return ((n / 2) * 2 == n);
}
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    isEven(num) ? printf("Even number") :printf("Odd number");
    return 0;
}*/

// Fourth apprroah.

/*
int isEven(int num)
{
    int even_no = 1;
    for(int i=1; i<=num; i++)
    {
        even_no = !even_no;
    }
    return even_no;
}
# include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    isEven(n)?printf("Even number"):printf("Odd number");
    return 0;
}*/

// Solution 5.
/*
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number :\n");
    scanf("%d",&n);
    if(n>=100 && n<1000)
    {
        printf("Three-digit number\n");
    }
    else{
        printf("Not three-digit number\n");
    }
    return 0;
}*/

// Solution 6.
/*
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two number:\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is greater\n",num1);
    }
    else if (num2>num1)
    {
        printf("%d is greater \n",num2);
    }
    else
    {
        printf("both %d and %d is same",num1,num2);
    }
    return 0;
}*/

// Solution 7.
/*
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d, root1,root2,realpart,imagpart;
    printf("Enter a three number :\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d = (b*b-4*a*c);
    printf("\n");
    if(d>0)
    {
        printf("roots are real and distinct \n");
        root1 = (-b+sqrt(d))/(2*a);
        root2 = (-b-sqrt(d))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf \n",root1,root2);
    }
    else if(d==0)
    {
        printf("roots are real and equal \n");
        root1=root2= -b/(2*a);
        printf("root1 = %.2lf and root2 = %.2f",root1,root2);
    }
    else
    {
        printf("roots are imaginary");
        realpart = -b/(2*a);
        imagpart = sqrt(-d)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2fi \n",realpart,imagpart,realpart,imagpart); 

    }
    return 0;
}
*/

// Solution 8. first apporach.

/*
#include<stdio.h>
int main()
{
    int year;
    int leap = 0;
    printf("Enter the year :\n");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                 leap =1;
            }
            else{
                 leap=0;
            }
        }else{
            leap = 1;
        }
    }else{
        leap = 0;
    }

    if(leap){
        printf("%d is a leap year \n",year);
    }else{
        printf("%d is not a leap year \n",year);
    }
    return 0;

}
*/

// Second approach.
/*
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0){
        printf("%d is a leap year \n",year);
    }else{
        printf("%d is not leap year \n",year);
    }
    return 0;
}
*/

// Solution 9.
/*
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter a three number:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("greatest = %d \n",num1);
        }
        else
        {
            printf("greatest = %d \n",num3);
        }
    }
    else if(num2>num3){
        printf("greatest = %d \n",num2);
    }
    else{
        printf("greatest = %d \n",num3);
    }
    return 0;
}
*/

// Solution 10.
/*
#include<stdio.h>
int main()
{
    double cp,sp,profit,loss,profitpercentage,losspercentage;
    printf("Enter the cost price and selling price :\n");
    scanf("%lf %lf",&cp,&sp);
    profit = sp - cp;
    loss = cp - sp;
    profitpercentage = (profit/cp)*100;
    losspercentage = (loss/cp)*100;
    printf("profitpercentage = %.2lf \n",profitpercentage);
    printf("losspercentage = %.2lf \n",losspercentage);
    return 0;
}
*/

// Solution 11.
/*
#include<stdio.h>
int main()
{
    float phy,che,math,eng,hindi,total;
    printf("Enter the marks of five subjet \n");
    scanf("%f%f%f%f%f",&phy,&che,&math,&eng,&hindi);
    total = phy+che+math+eng+hindi;
    float percentage = (total/500)*100;
    if(percentage>33.0)
    {
        printf("you are passed in exam \n");
    }else{
        printf("you are fail in exam \n");
    }
    return 0;
}
*/

// Solution 12.
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("%c is a uppercase \n",ch);
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("%c is a lowercase \n",ch);
    }
    else
    {
        printf("%c is not a lower case and uppercase \n",ch);
    }
    return 0;
}
*/

// Solution 13.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num%3==0 && num%2==0)
    {
        printf("%d is divisible by 3 and 2 \n",num);
    }
    else
    {
        printf("%d is not divisible by 3 and 2 \n",num);
    }
    return 0;

}
*/

// Solution 14.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num%7==0 || num%2==0)
    {
        printf("%d is divisible by 7 or 2 \n",num);
    }
    else
    {
        printf("%d is not divisible by 7 or 2 \n",num);
    }
    return 0;

}
*/

// Solution 15.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is a positive \n",num);
    }
    else if(num==0)
    {
        printf("%d is zero \n",num);
    }
    else
    {
        printf("%d is negative \n",num);
    }
    return 0;
}
*/

// So;ution 16.
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character :\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("%c is a uppercase \n",ch);
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("%c is a lowercase \n",ch);
    }
    else if(ch>='0'&& ch<='9')
    {
        printf("%c is a digit \n",ch);
    }
    else
    {
        printf("%c is symbol \n",ch);
    }
    return 0;
}
*/

// Solution 17.
/*
#include<stdio.h>
#include<stdbool.h>
bool checkValidity(int a , int b, int c)
{
    if((a+b<=c) || (b+c<=a) || (c+a<=b))
    {
        return false;
    }
    return true;
}

int main()
{
    int side1,side2,side3;
    printf("Enter the sides of a triangle :\n");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(checkValidity(side1,side2,side3))
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;

}
*/

// Solution 18.

#include<stdio.h>
int main()
{
    int monthNo;
    printf("Enter a month number :\n");
    scanf("%d",&monthNo);
    switch (monthNo)
    {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :
            printf("Month have 31 days.\n");
            break;
    case 2 :
            printf("Month have 28 days.\n");
            printf("Month have 29 days.\n");
            break;
    case 4 :                
    case 6 :                
    case 9 :                
    case 11 :                
            printf("Month have 30 days.\n");
            break;               
        
    
    default:
            printf("Invalid month number.\n please try again....\n");
            break;
    }
}