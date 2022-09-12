// Solution 1.

// #include<stdio.h>
// int gcd(int,int);
// int main()
// {
//     int n1,n2,result,lcm;
//     printf("Enter two number :\n");
//     scanf("%d%d",&n1,&n2);
//     result = gcd(n1,n2);
//     lcm = (n1*n2)/result;
//     printf("the lcm of %d and %d is : %d",n1,n2,lcm);
//     return 0;
// }

// int gcd(int a,int b)
// {
//     int i,result2;
//     for( i =1; i<=a &&i<=b; i++)
//     {
//         if(a%i==0 && b%i ==0)
//             result2 = i;
//     }
//     return result2;

// }

// Solution 2.

// #include<stdio.h>
// int hcf(int,int);
// int main()
// {
//     int num1,num2,gcd;
//     printf("Enter a two number :\n");
//     scanf("%d%d",&num1,&num2);
//     gcd = hcf(num1,num2);
//     printf("The hcf of %d and %d is : %d",num1,num2,gcd);

// }

// int hcf(int a ,int b)
// {
//     int i,result;
//     for(i = 1; i<=a && i<=b; i++)
//     {
//         if(a%i == 0 && b%i == 0)
//             result = i;
//     }
//     return result;
// }

// Solution 3.

// #include<stdio.h>
// int isPrime(int);
// int main()
// {
//     int num,res;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     isPrime(num);
//     if(res == 1)
//         printf("%d is a prime number\n",num);
//     else
//         printf("%d is not a prime number\n",num);   
//     return 0;     
// }

// int isPrime(int n)
// {
//     int i;
//     for(i = 2;i<=n/2; i++)
//     {
//         if(n%i==0)
//             return 0;
            
//     }
//     return 1;
// }

// Solution 4.
// Pascal triangle----- we need first factorial of a number then we need combination of a number then we need permutation of number-----
// #include<stdio.h>
// #include<math.h>
// int fact(int);
// int combi(int,int);
// int permu(int,int);
// void pascal(int n);
// int main()
// {
//     printf("%d\n",fact(5));
//     printf("%d\n",combi(5,2));
//     printf("%d\n",permu(5,2));
//     printf("%d ",pascal(5));
//     return 0;
// }

// int fact(int n)
// {
//     int i,fact=1;
//     for(i=1;i<=n;i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
// }

// int combi(int n, int r)
// {
//     return fact(n)/(fact(r)*fact(n-r));
// }

// int permu(int n,int r)
// {
//     return fact(n)/fact(n-r);
// }

// void pascal(int n)
// {
//     int i,j;
//     for(i = 0; i<=n; i++)
//     {
//         for(j = 0; j<=i; j++)
//             printf("%d ",combi(i,j));
//         printf("\n");    
//     }
// }


// Arrays

// #include<stdio.h>
// int main()
// {
//     int i, num[10],s=0,o=0;
//     float avg;
//     printf("Enter the ten numbers :\n");
//     for(int i=0;i<=9;i++)
//     {
//         scanf("%d",&num[i]);
//         if(num[i]%2==0)
//             s=s+num[i];
//         else    
//             o = o+num[i];    
//     }
//     // avg = s/3.0;
//     printf("%d\n",s);
//     printf("%d\n",o);
//     return 0;

// }


// String

// #include<stdio.h>
// int main()
// {
//     char str[10] = {'B','H','O','P','A','L'};
//     int i,count = 0;
//     for(i=0;str[i];i++)
//     {
//         printf("%c",str[i]);
//         count++;
//     }
//     printf("%d\n",count);
// }

// Solution 5.

// #include<stdio.h>
// void PrintFirstN_PrimeNumbers(int);
// int main()
// {
//     int num;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     PrintFirstN_PrimeNumbers(num);
//     return 0;
// }

// void PrintFirstN_PrimeNumbers(int n)
// {
//     int i,j;
//     for(i=2;i<=n;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i%j==0)
//                 break;
//         }
//         if(i==j)
//             printf("%d ",i);
    
//     }
// }

// Soltion 6.

// #include<stdio.h>
// int isPrime(int);
// int main()
// {
//     int num1,num2;
//     printf("Enter two numbers :\n");
//     scanf("%d%d",&num1,&num2);
//     printf("The prime numbers betwwen %d and %d are: \n");
//     for(int i = num1;i<=num2;i++)
//     {
//         if(isPrime(i))
//             printf("%d ",i);
//     }
//     return 0;
// }

// int isPrime(int n)
// {
//     int i,j;
//     for(i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//             return 0;
//         return 1;    
//     }
// }


// // Solution 8.

// #include<stdio.h>
// void Fibonacci(int);
// int main()
// {
//     int num;
//     printf("Enter a nth value :\n");
//     scanf("%d",&num);
//     Fibonacci(num);
//     return 0;
// }

// void Fibonacci(int n)
// {
//     int a=0,b=1,sum=0;
//     while(sum<=n)
//     {
//         printf("%d ",sum);
//         a=b;
//         b=sum;
//         sum = a+b;
//     }
// }


// Solution 9.
#include<stdio.h>
int Square(int);
int main()
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    printf("The square %d is : %d",num,Square(num));
    return 0;
}

int Square(int n)
{
    return n*n;
}