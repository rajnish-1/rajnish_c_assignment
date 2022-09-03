// Solution 1.

// #include<stdio.h>
// #include<math.h>
// float Area_circle(float);
// int main()
// {
//     float r,area;
//     printf("Enter the radius of a circle :\n");
//     scanf("%f",&r);
//     area = Area_circle(r);
//     printf("Area of circle is : %.2f",area);
//     return 0;
// }

// float Area_circle(float r)
// {
//     return 3.14*r*r;
// }

// Solution 2.

// #include<stdio.h>
// float Simple_intrest(float,float,float);
// int main()
// {
//     float p,r,t,S_I;
//     printf("Enter the value of princile :\n");
//     scanf("%f",&p);
//     printf("Enter the value of rate :\n");
//     scanf("%f",&r);
//     printf("Enter a value of time : \n");
//     scanf("%f",&t);
//     S_I = Simple_intrest(p,r,t);
//     printf("Simple intreast is : %.2f",S_I);
//     return 0;
// }

// float Simple_intrest(float p, float r, float t)
// {
//     return ((p*r*t)/100);
// }

// Solution 3.

// #include<stdio.h>
// int EvenOdd(int);
// int main()
// {
//     int n,result;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
//     result = EvenOdd(n);
//     printf("%d",result);
//     return 0;
// }

// int EvenOdd(int n)
// {
//     if(n%2==0)
//         return 1;
//     else
//         return 0;    
// }

// Solution 4.

// #include<stdio.h>
// void Numbers(int);
// int main()
// {
//     int num;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     Numbers(num);
//     return 0;
// }

// void Numbers(int n)
// {
//     int i;
//     for(int i=1;i<=n;i++){
//         printf("%d ",i);
//     }
// }

// Solution 5.

// #include<stdio.h>
// void Numbers(int);
// int main()
// {
//     int num;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     Numbers(num);
//     return 0;
// }

// void Numbers(int n)
// {
//     int i;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0)
//             printf("%d ",i);
//     }
// }

// Solution 6.

// #include<stdio.h>
// int fact(int);
// int main()
// {
//     int num, factorial;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     factorial = fact(num);
//     printf("Factorial of %d is : %d",num,factorial);
//     return 0;
// }

// int fact(int n)
// {
//     int i,result =1;
//     for( i = n; i>=1 ;i--){
//         result = result*i;
//     }
//     return result;
// }

// Solution 7.

// #include<stdio.h>
// int fact1(int);
// int fact2(int);
// int fact3(int n,int r);
// int main()
// {
//     int n,r,factorial1,factorial2,factorial3,combination,product;
//     printf("Enter the value of n :\n");
//     printf("Enter the value of r :\n");
//     scanf("%d%d",&n,&r);
//     factorial1 = fact1(n);
//     printf("%d\n",factorial1);
//     factorial2 = fact2(r);
//     printf("%d\n",factorial2);
//     factorial3 = fact3(n,r);
//     printf("%d\n",factorial3);
//     product = factorial2*factorial3;
//     combination = factorial1/product;
//     printf("Combination of a number is : %d",combination);
//     return 0;
// }

// int fact1(int n)
// {
//     int i,result1 =1;
//     for( i = n; i>=1 ;i--){
//         result1 = result1*i;
//     }
//     return result1;
// }


// int fact2(int r)
// {
//     int i,result2 =1;
//     for( i = r; i>=1 ;i--){
//         result2 = result2*i;
//     }
//     return result2;
// }


// int fact3(int n, int r)
// {
//     int i,result3=1,subtract;
//     subtract = n-r;
//     for(i = subtract; i>=1; i--){
//         result3 = result3 * i;
//     }
//     return result3;
// }

// Soution 8. same as solution 7.

// Solution 9.

// #include<stdio.h>
// int isdigit(char);
// int main()
// {
//     char ch;
//     int result;
//     printf("Enter a charcter :\n");
//     scanf("%c",&ch);
//     result = isdigit(ch);
//     printf("%d",result);
//     return 0;
// }

// int isdigit(char a)
// {
//     if(a>='0'&& a<='9')
//         return 1;
//     else
//         return 0;    
// }

// Solution 10 .

#include<stdio.h>
int main()
{
    int i, j, num, isPrime;
    printf("Enter any nummber to print prime factors :\n");
    scanf("%d",&num);
    printf("All prime factors of %d are : \n",num);
    for (i = 2; i<= num; i++)
    {
        if(num%i==0){
            isPrime = 1;
            for(j=2;j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
                printf("%d, ",i);
        }

    }
    return 0;
}