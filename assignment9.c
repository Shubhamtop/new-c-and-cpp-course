// assignment no.9
/*1. Write a program which takes the month number as an input and display
number of days in that month.*/
// #include<stdio.h>
// int main()
// {
//     int month;
//     printf("enter name of month");
//     scanf("%d",&month);
//     switch(month)
//     {
//         case 1:
//         printf("31 days in month");
//         break;

//         case 2:
//         printf("29 days in month");
//         break;

//         case 3:
//         printf("31 days in month");
//         break;

//         case 4:
//         printf("30 days in month");
//         break;

//         case 5:
//         printf("31 days in month");
//         break;

//         case 6:
//         printf("31 days in month");
//         break;

//         case 7:
//         printf("31 days in month");
//         break;

//         case 8:
//         printf("30 days in month");
//         break;

//         case 9:
//         printf("31 days in month");
//         break;

//         case 10:
//         printf("30 days in month");
//         break;

//         case 11:
//         printf("31 days in month");
//         break;

//         case 12:
//         printf("31 days in month");
//         break;

//    default:
//    printf("not output");
//    break;
//     }
// }
// /*program no.2
// Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit*/
// #include <stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char x;
//     int  y, z;
//     printf("enter your choice in a to e:--");
//     scanf("%c", &x);
//     switch (x)
//     {
//     case 'a':

//      {   printf("entr two numbers");
//         scanf("%d%d", &y, &z);
//         printf("sum is %d", y + z);
//         break;
//     }
//      case 'b':

//      {   printf("entr two numbers");
//         scanf("%d%d", &y, &z);
//         printf("substraction is %d", y - z);
//         break;
//     }
//      case 'c':

//      {   printf("entr two numbers");
//         scanf("%d%d", &y, &z);
//         printf("mulitplication is %d", y * z);
//         break;
//     }
//      case 'd':

//      {   printf("entr two numbers");
//         scanf("%d%d", &y, &z);
//         printf("division is %d", y / z);
//         break;
//     }
//      case 'e':

//         exit(1);

//         default:
//         printf("wrong input");
//         break;
//     }
// }

/*Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
// #include<stdio.h>
// int main()
// {
//     int week;
//     printf("enter day number of week");
//     scanf("%d",&week);
//     switch(week)
//     {
//         case 1:
//         printf("monday");
//         break;

//         case 2:
//         printf("tuesday");
//         break;

//         case 3:
//         printf("wednesday");
//         break;

//         case 4:
//         printf("thrusday");
//         break;

//         case 5:
//         printf("friday");
//         break;

//         case 6:
//         printf("saturday");
//         break;

//         case 7:
//         printf("sunday");
//         break;
// default:
// printf("wrong input");
// break;
//     }
// }

/*
program no.4
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int n,n1,n2;
//     char x;
//     printf("enter ur choice from given option a to d:=");
//     scanf("%c",&x);
//     printf("enter the length of a,b and c");
//     scanf("%d%d%d",&n,&n1,&n2);
//     switch(x)
//     {
//         case 'a':
//         {
//             if((n==n1)||(n1==n2)||(n2==n))
//             printf("triangle is isocles");
//            else
//            printf("triagnle not isocles");
//             break;
//         }
//          case 'b':
//         {
//             if((n*n+n1*n1==n2*n2)||(n*n==n2*n2+n1*n1)||(n*n+n2*n2==n1*n1))
//             printf("triangle is right angle triangle");
//             else
//             printf("triagnle is not right angle tringle");
//             break;
//         }
//             case'c':
//             {
//                 if((n=n1)&&(n1==n2)&&(n2==n))
//                                             printf("triangle is equilatrel");
//                                             else
//                                             printf("not equilatreal");
//                                             break;

//            }
//    case 'd':
//    exit(0);
//     }
// }

/*program no.5
Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");*/

//   #include<stdio.h>
//   #include<conio.h>
//   int main()
//   {
//     int var;
//     printf("Enter the value of variable");
//     scanf("%d",&var);
//     switch(var)
//     {
//         case 1:
//         printf("good");
//         break;

//         case 2:
//         printf("better");
//         break;

//         case 3:
//         printf("best");
//         break;

// default:;
// printf("invalid");
// break;

//     }
//   }

/*6. Program to check whether a year is a leap year or not. Using switch
statement*/

// #include <stdio.h>
// int main()
// {
//     int year = 2024;
//     switch (year % 100 == 0)
//     {
//     case 1:
//     {
//         switch (year % 400 == 0)
//         {
//         case 1:
//             printf("leap year");
//             break;
//         case 0:
//             printf("not leap year");
//         }
//     }

//     case 0:
//     {
//         switch (year % 4 == 0)
//         {
//         case 1:
//             printf("year is leap year");
//             break;
//         case 0:
//             printf("not a leap year");
//             break;
//         }
//     }
//     }
// }

/*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

// #include <stdio.h>
// int main()
// {
//     float unit, sum = 0, amount=0;
//     printf("enter the unit charges");
//     scanf("%d", &unit);
//     switch (unit <=50)
//     {
//     case 1:

//     {
//         amount = unit * 0.50;
//         //printf("charges is %d", amount);
//         break;
//     }
//     case 0:
//     {
//         switch (unit <=100)
//         {
//         case 1:
//         {
//             amount = 25 + (unit - 50) * 0.75;
//             //printf("charges is %d", amount);
//             break;
//         }
//         case 0:
//         {
//             switch (unit <=250)
//             {
//             case 1:
//             {
//                 amount = 100 + (unit - 150) * 1.20;
//                // printf("charges is %d", amount);
//                 break;
//             }
//             case 0:
//             {
//                 switch (unit <=350)
//                 {
//                 case 1:
//                     amount = 220 + (unit - 250) * 1.50;
//                    // printf("charges is %d", amount);
//                     break;
//                 case 0:
//                     break;
//                 }
//             }
//             }
//         }
//         }
//     }
//     }
//     amount = amount * 0.20;
//     printf("total amount is %f", amount);
// }

/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the num");
//     scanf("%d", &n);
//     switch (n >= 0)
//     {
//     case 1:
//         printf("the num is -%d", n);
//         break;
//     case 0:
//         printf("the num is +%d", -n);
//         break;
//     }
// }

/*9. Program to Convert even number into its upper nearest odd number
Switch Statement.*/

// #include <stdio.h>
// int main()
// {
//     int x = 12;
//     switch (x % 2 == 0)
//     {
//     case 1:

//     {
//         x = x + 1;
//         printf("the  odd number is %d", x);
//         break;
//     }
//     case 0:
//     {
//         printf("the odd number is %d", x);
//     }
//     }
// }



/*10. C program to find all roots of a quadratic equation using switch case*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,result;
    printf("enter the value of a ,b and c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d>0)
    {
        case 1:
        result=-b+sqrt(d)/2*a;
        printf("roots is %d",result);
        break;
    case 2:
    switch(d<0)
    {
        case 1:
        {
       result=-b-sqrt(4*a*c-b*b)/2*a;
        printf("roots is %d",result);
        break;  
        }
        case 0:
        result=-b/2*a;
        printf("roots are %d",result);
    }
    }
}
