
// Solution 1 .

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(j<=i)
//             {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Slolution 2.

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(j>=6-i)
//             {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Solution 3.

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(j<=6-i)
//             {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Solution 4.

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(j>=i)
//             {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Solution 5.

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=9; j++)
//         {
//             if(j>=6-i && j<=4+i)
//             {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Solution 6.

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=9; j++)
//         {
//             if(j>=i && j<=10-i)
//             {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Solution 7.

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=10; j++)
//         {
//             if(j<=6-i || j>=5+i)
//             {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Solution 8.
// #include<stdio.h>
// int main()
// {
//     int i,j,count=0;
//     for(int i = 1; i<=4; i++)
//     {
//         count = 0;
//         for(int j = 1; j<=4-i; j++)
//             printf(" ");
//         for(int j=1; j<=i;j++) 
//             printf("%d",++count);
//         count--;
//         while(count)
//             printf("%d",count--);   
//         printf("\n");
    
//     }
//     return 0;
// }

// Solution 19.

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i <= 3; i++ )
//     {
//         for(int j = 1; j <= 16; j++)
//         {
//             if((j >= 4-i && j <= 5+i) ||(j >= 12-i && j <= 13+i))
//                 printf("*");
//             else
//                 printf(" ");    
//         }
//         printf("\n");
//     }
//     for(int i = 1; i <= 10; i++ )
//     {
//         for(int j = 1; j <= 19; j++)
//         {
//             if(i==1 && j==7 )
//                 printf("MySirG");

//             if(i == 1 && j>=7 && j<=12)
//                 continue; 

//             if(j >= i && j <= 20-i)
//                 printf("*");
//             else
//                 printf(" ");    
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Solution 18.

// #include<stdio.h>
// int main()
// {
//     int i, j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=9; j++)
//         {
//             if(j >= 6-i && j <= 4+i)
//                 printf("*");
//             else
//                 printf(" ");    
//         }
//         printf("\n");
//     }
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=9; j++)
//         {
//             if(j >= i+1 && j <= 9-i)
//                 printf("*");
//             else
//                 printf(" ");    
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// Solution 16.

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=9; j++)
//         {
//             if(j>=i && j<=10-i)
//                 printf("*");
//             else
//                 printf(" ");    
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Solution 10.

// #include<stdio.h>
// int main()
// {
//     int i,j,count = 0;
//     for(i = 0; i<=3; i++)
//     {
//         count = 0;
//         for(j = 0; j<=3-i; j++)
//             printf("%d",++count);
    
//         for(j = 0; j<2*i-1;j++)
//         printf(" ");

//         if(i==0)
//             count--;
//         while(count)
//             printf("%d",count--);
//         printf("\n");    
//     }
//     return 0;            
// }

// Solution 9.

// #include<stdio.h>
// int main()
// {
//     int i,j,count=0;
//     for(i=1;i<=4;i++)
//     {
  
//         count = 0;
//         for(j =1; j<=4;j++){
//             if(count == 4||j<=i-1)
//                 printf(" ");
//             else
//                 printf("%d",count--);    

//             printf("%d",++count);}  
//         printf("\n");   

//     }
// }


// -------------FUNCTION PRACTICE---------------

// #include<stdio.h>
// void add();
// int main()
// {
//     int num1 ,num2;
//     printf("Enter two number\n");
//     scanf("%d%d",&num1,&num2);
//     add(num1,num2);
//     return 0;
// }

// void add(int a, int b)
// {
//     int c;
//     c = a + b;
//     printf("sum of a = %d and b = %d is : %d",a,b,c);
// }

//  RECURSION
// Sum of first n naturals numbers by recursion.
// #include<stdio.h>
// int Sum(int);
// int main()
// {
//     int k,num;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     k = Sum(num);
//     printf("sum of first %d natural numbers is : %d",num,k);
//     return 0;
// }

// int Sum (int n)
// {
//     int s;
//     // #-->Base case
//     if(n==1)           
//         return 1;
//     // #--> recursive case
//     s = n + Sum(n-1);        
//     return s;
// }

// Factorial of a n number by recursion.

// #include<stdio.h>
// int fact(int);
// int main()
// {
//     int num, factorial;
//     printf("Enter a number:\n");
//     scanf("%d",&num);
//     factorial = fact(num);
//     printf("factorial of %d is : %d",num,factorial);
//     return 0;
// }

// int fact(int n)
// {
//     if(n == 0 ||n==1)
//         return 1;
//     return n * fact(n-1);
// }

// #include<stdio.h>
// void num(int);
// int main()
// {
//     num(10);
// }

// void num(int n)
// {
//     if(n>0)
//     {
//         num(n-1);
//         printf("%d ",n);
//     }
    
// }