// Solution 1.

// #include<stdio.h>
// int main()
// {
//     int month, days;
//     printf("Enter the month number :\n");
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 1:
//         printf("Month is january : - days -31 \n");
//         break;
//     case 2 :
//         printf("month is febuarary : days - 28 \n");
//         break;
//     case 3 :
//         printf("month is march : days - 31 \n");
//         break;
//     case 4 :
//         printf("month is april : days - 30 \n");
//         break;
//     case 5 :
//         printf("month is may : days - 31 \n");
//         break;            
//     case 6 :
//         printf("month is june : days - 30 \n");
//         break;
//     case 7 :
//         printf("month is july : days - 31 \n");
//         break;
//     case 8 :
//         printf("month is agust : days - 31 \n");
//         break;
//     case 9 :
//         printf("month is september : days - 30 \n");
//         break; 
//     case 10 :
//         printf("month is october : days - 31 \n");
//         break;
//     case 11 :
//         printf("month is november : days - 30 \n");
//         break;
//     case 12 :
//         printf("month is december : days - 31 \n");
//         break;                       
//     default:
//         printf("No matching case found \n");
//         break;
//     }
//     return 0;
// }

// Solution 2.

// #include<stdio.h>
// int main()
// {
//     int choice,a,b,s;
//     printf("Enter a choice number :\n");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1 : Addition :
//              printf("Addition.\n");           
//              printf("Enter a two number :\n");
//              scanf("%d%d",&a,&b);
//              s = a+b;
//              printf("Sum of %d and %d is : %d\n",a,b,s);
//              break;
//     case 2 : Subtraction :  
//              printf("Substraction.\n");
//              printf("Enter a two number :\n");
//              scanf("%d%d",&a,&b);
//              s = a-b;
//              printf("Subtraction of %d and %d is : %d\n",a,b,s);
//              break;          
//     case 3 : Multiplication :  
//              printf("Multilication.\n");
//              printf("Enter a two number :\n");
//              scanf("%d%d",&a,&b);
//              s = a*b;
//              printf("Multiplication of %d and %d is : %d\n",a,b,s);
//              break; 
//     case 4 : Division :  
//              printf("Division.\n");
//              printf("Enter a two number :\n");
//              scanf("%d%d",&a,&b);
//              s = a/b;
//              printf("Division of %d and %d is : %d\n",a,b,s);
//              break;  
//     case 5 : Exit :
//              printf("Exit.\n");
//              printf("Program will End !\n");                                  
//     default:
//              printf("No matching cases will found !\n");   
//              break;
//     }
//     return 0;
// }

// Solution 3.

// #include<stdio.h>
// int main()
// {
//     int days;
//     printf("Enter a days number :\n");
//     scanf("%d",&days);
//     switch (days)
//     {
//     case 1:
//         printf("Good Morning , Monday !");
//         break;
//     case 2:
//         printf("Good Morning , Tuesday ! it is a special day in my life");
//         break;
//     case 3:
//         printf("Welcome back , Wednesday ! new generation will come");
//         break;
//     case 4:
//         printf("Good Morning , Thrusday !");
//         break;
//     case 5:
//         printf("Good Morning , Friday ! this day is good for surprising to other person");
//         break;
//     case 6:
//         printf("Good Morning , Saturday !");
//         break;
//     case 7:
//         printf("Good Morning , Sunday ! we are just playing in this day ");
//         break;
//     default:
//         printf("There is no more days in a one week !");
//         break;
//     }
// return 0;
// }

// Solution 4.

// #include<stdio.h>
// int main()
// {
//     int choice,side1,side2,side3;
//     printf("Enter a coice number :\n");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         printf("Check wheter the given sides of triangle is Isosceles Triangle or not.\n");
//         printf("Enter the three sides of triangle :\n");
//         scanf("%d%d%d",&side1,&side2,&side3);
//         if(side1 == side2 || side2 == side3 || side3 == side1 )
//             printf("Isosceles triangle !");
//         else
//             printf("Not a isoscles trianlge !");    
//         break;
//     case 2:
//         printf("Check wheter the given sides of triangle is Right angled Triangle or not.\n");
//         printf("Enter the three sides of Right angled triangle :\n");
//         scanf("%d%d%d",&side1,&side2,&side3);
//         if((side1*side1) + (side2*side2) == (side3*side3) || (side2*side2) + (side3*side3) == (side1*side1) || (side3*side3) + (side1*side1) == (side2*side2))
//             printf("Right angled triangle !");
//         else
//             printf("Not a Right angled  trianlge !");    
//         break;
//     case 3:
//         printf("Check wheter the given sides of triangle is Equilateral Triangle or not.\n");
//         printf("Enter the three sides of triangle :\n");
//         scanf("%d%d%d",&side1,&side2,&side3);
//         if(side1 == side2 && side2 == side3 && side3 == side1 )
//             printf("Equilateral triangle !");
//         else
//             printf("Not an Equilateral trianlge !");    
//         break;
//     case 4 :
//         printf("...Exit... !\n");        
//     default:
//         printf("No matching cases found !");
//         break;
//     }
//     return 0;
// }

// Solution 5.

// #include<stdio.h>
// int main()
// {
//     int var;
//     printf("Enter the value of var :\n");
//     scanf("%d",&var);
//     switch(var)
//     {
//         case 1 :
//             printf("good");
//             break;
//         case 2 :
//             printf("better");
//             break;
//         case 3 :
//             printf("best");
//             break;    
//         default:
//             printf("Invalid");
//             break;
//     }
//     return 0;
// }

// Soltion 6.

// #include<stdio.h>
// int main()
// {
//     int year, reamainder;
//     printf("Enter a year :\n");
//     scanf("%d",&year);
//     reamainder = ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)));
//     switch (reamainder)
//     {
//     case 1 :
//         printf("Leap year ! \n");
//         break;
//     case 0 :
//         printf("Not a leap year !\n");
//         break;
//     default:
//         printf("Invalid ");
//         break;
//     }
//     return 0;
// }

// Solution 8.

// #include<stdio.h>
// int main()
// {
//     int choice,negative = -1;
    // float n;
//     printf("select 1 , for negative to positive \n");
//     printf("select 2 , for positive to nrgative \n");
//     printf("Enter a choice number :\n");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1 :
//         printf("enter a negative number :\n");
//         scanf("%d",&n);
//         if(n<0){
//             n = n*negative;
//             printf("conversion of negative to positive is : %d",n);
//             }
//         break;
//     case 2 :
//         printf("Enter a positive number :\n");
//         scanf("%d",&n); 
//         if(n>0)
//             n = n*negative;
//             printf("conversion of positive to negative is : %d",n);
//         break;       
    
//     default:
//         printf("Invalid input or character !");
//         break;
//     }
//     return 0;
// }


// Solution 9.

// #include<stdio.h>
// int main()
// {
//     int choice
//     int number;
//     printf("select 1, for even number \n");
//     printf("Enter a choice number \n");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1 :
//         printf("enter a number :\n");
//         scanf("%d",&number);
//         if(number%2==0){
//             number = number+1;
//             printf("Convert even number into upper nearest oddd number is : %d",number);
//             }
//         else
//             printf("odd number");    
//         break;
    
//     default:
//         printf("Invalid choice !");
//         break;
//     }
//     return 0;
// }

// Soultion 10.

#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    float root1,root2,a, b, c,imag;
    float d;
    printf("select 1, for roots are real and unequal \n");
    printf("select 2, for roots are real and equal \n");
    printf("select 3, for roots are unequal and imaiginary \n");
    // printf("Enter a choice number :\n");
    // scanf("%d",&choice);
    printf("Enter the value of a ,b , c : \n");
    scanf("%f%f%f",&a,&b,&c);
    d = ((b*b) - (4*a*c));    

    switch(d>0)
    {
    case 1:
        // printf("Enter the value of a ,b , c : \n");
        // scanf("%f%f%f",&a,&b,&c);
            root1 = (-b + sqrt(d))/(2*a);
            root2 = (-b - sqrt(d))/(2*a);
            printf("root1 = %2f and root2 = %2f ",root1,root2);
            break;
    case 0 :
        // printf("Enter the value of a ,b , c : \n");
        // scanf("%f%f%f",&a,&b,&c);
            switch (d<0)
            {
            case 1:
                root1 = root2 = (-b )/ (2*a);
                imag  = sqrt(-d)/(2*a);
                printf("%2f + i%2f and %2f - i%2f",root1,imag,root2,imag);
                break;
            case 0:
                root1 = root2 = (-b)/(2*a);
                printf("root1 and root2 = %2f",root1);
                break;
            }
    }
    return 0;

}