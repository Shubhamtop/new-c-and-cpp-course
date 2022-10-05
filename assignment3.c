/*program to check given number is positive or not*/
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter number");
//     scanf("%d",&a);
//     if(a>0)
//     printf("number is positive");
//     else
//     printf("number is negative");
//     return 0;
// }

/*program 2. to check number is divisible by 5 or not*/

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter number");
//     scanf("%d",&a);
//   if(a%5)
//   printf("the number is not divisble by 5");
//   else
//   {
// printf("number is divisble by 5");
//   }
// }

/*program 3. to find number is even and odd-*/
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter number");
//     scanf("%d",&a);
//     if(a%2)
//     printf("number is odd");
//     else
//     printf("number is even");
//     return 0;
// }

/*program 4. find even and odd without % oper*/
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter number");
//     scanf("%d",&a);
//     if(a&1)                                        
//     printf("number is odd");
//     else
//     printf("number is even");
//     return 0;
// }

/*program no.5 to find no. is three digit or not*/
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter number");
//     scanf("%d",&a);                                     //doubt
//     if(a>99&&a<=999)
//     printf("number is three digit");
//     else
//     printf("number is not three digit");
//     return 0;
// }

/*program no.6 */

#include<stdio.h>
int main()
{
    int s,m;
    printf("enter the  two number");
    scanf("%d %d",&s,&m);
    printf(" the number is greater=%d",((s>m)?s:m));
}

/*program no.7 find roots of equation*/
//   #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//     printf("enter equation in ax2+bx+c form");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("equation is %dx2+%dx+%d",a,b,c);
// d=b*b-(4*a*c);
// if(d>0)
// printf("roots are real and distinct");
// else if(d<0)
// printf("roots are imaginary ");
// else
// printf("roots are real and equal");
// return 0;
// }

/*program no.8 find to year is leap or not*/
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("enter any year");
//     scanf("%d", &a);
//     if (a % 4 == 0)
//     {
//         if (a % 100 == 0)
//         {
//             if (a % 400 == 0)
//                 printf("year is leap");
//             else
//                 printf("year isnot leap year");
//         }
//         else

//             printf("year is leap year");
//     }
//         else

//             printf("year isnot leap year");
//         }

// /*program no.9 find greatest among three numbers*/
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter number");
//     scanf("%d",&a);
//      printf("enter number");
//     scanf("%d",&b);
//      printf("enter number");                        //doubt
//     scanf("%d",&c);
//    printf("%d",(a>b)?((a>c)?a:c):((b>c)?b:c));

//     }

// }

/*program no.10 wap to find profit or loss*/
//  #include<stdio.h>
//  int main()
//  {
//      int sp,cp,result;
//      printf("enter cost price of item");
//      scanf("%d",&cp);
//      printf("enter selling price of item");
//      scanf("%d",&sp);
//      if(sp>cp)
//      printf("profit");
//      else
//      printf("loss");

// /*program no.11 */
//  #include<stdio.h>
//  int main()
//  {
//      int s1,s2,s3,s4,s5;
//     printf("enter marks in first subject");
//     scanf("%d",&s1);
//     printf("enter marks in second subject");
//     scanf("%d",&s1);
//     printf("enter marks in third subject");
//     scanf("%d",&s3);
//     printf("enter marks in fourth subject");
//     scanf("%d",&s4);
//     printf("enter marks in fifth subject");
//     scanf("%d",&s5);
//     if(s1>=33&&s2>=33&&s3>=33&&s4>=33&&s5>=33)                     
    
//         printf("candidate is passed");

    
//     else
//         printf("candidate is failed");
           
//  }

/*program no.12*/
/*wap to check character in upperacase or lowercase*/
// #include<stdio.h>
// int main()
// {
//     char s;
//     printf("enter character");
//     scanf("%c",&s);
//     if(s>=65  && s<=90)
//     printf("uppercase");
//     else
//     printf("lowercase");
// }

/*program no.13*/
//  #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//     if(n%2==0&&n%3==0)
//     printf("number is divisble by 2 and 3");
//     else
//     printf("number is not divisble by 2 and 3");
//     return 0;
// }

/*program no.14*/
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//     if(n%7==0&&n%3==0)
//     printf("number is divisble by 7 and 3");
//     else
//     printf("number is not divisble by 7 and 3");
//     return 0;
// }

/*program no.15*/
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter number");
//     scanf("%d",&a);
//     if(a>0)
//     printf("number is positive");
//     else if(a<0)
//     printf("number is negative");
//     else
//     printf("number is equal to zero");
//     return 0;
// }

/*program no.16*/
// #include <stdio.h>
// int main()
// {
//     char s;
//     printf("enter character");
//     scanf("%c", &s);
//     if (s >= 65 && s <= 90)
//         printf("uppercase");
//     else if (s >= 97 && s <= 122)
//         printf("lowercase");
//     else if (s >= '0' && s <= '9')
//         printf("digit number");
//     else
//         printf("special charascters");
// }

/*program no.17*/
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("enter one side of triangle");
//     scanf("%d", &a);
//     printf("enter one side of triangle");
//     scanf("%d", &b);

//     printf("enter one side of triangle");
//     scanf("%d", &c);

//     if (a + b > c && a + c > b && b + c > a)
//         printf("traingle is valid");
//     else
//         printf("triangle is not valid1");
// }

// /*program no.18*/
// #include <stdio.h>
// int main()
// {
//     int month;
//     printf("enter name of month");
//     scanf("%d",&month);
//     switch(month)
//     {
//         case'1':
//         printf("31 days in month");
//         break;
    
 
//         case'2':
//         printf("29 days in month");
//         break;
    
 
//         case'3':
//         printf("31 days in month");
//         break;
    
 
//         case'4':
//         printf("30 days in month");
//         break;
    
//         case'5':
//         printf("31 days in month");
//         break;
    
//         case'6':
//         printf("31 days in month");
//         break;
    
//         case'7':
//         printf("31 days in month");
//         break;
    
//         case'8':
//         printf("30 days in month");
//         break;
    
//         case'9':
//         printf("31 days in month");
//         break;
    
         
//         case '10':
//         printf("30 days in month");
//         break;
    
     
//         case '11':
//         printf("31 days in month");
//         break;
    
     
//         case '12':
//         printf("30 days in month");
//         break;
    
//    default:
//    printf("not output");
//    break;
//     }
// }