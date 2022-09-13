/*write a program to print unit digit of number
#include<stdio.h>
int main()
{
    int x,s;
    printf("enter number in three digit");
    scanf("%d",&x);
 s=x/100;
 printf("the unit digit of number is %d",s);
 
 return 0;
}
*/
/*program no. 2
write a program to print a number without its last digit55
#include<stdio.h>
int main()
{
    int x,s;
    printf("enter number");
    scanf("%d",&x);
 s=x%10;
 printf("the unit digit of number is %d",s);
 
 return 0;
}
*/
/*program no. 3

#include<stdio.h>
int main()
{
    
    int x,s,temp;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&s);
 temp=x;
 x=s;
 s=temp;
 printf("the two numbers after swap :- a is %d, b is %d",x,s);
 
 return 0;
}
*/
/* d


/* program no. 4*/
/*
#include<stdio.h>
int main()
{
    
    int x,s;
    printf("enter two  number\n");
    scanf("%d %d",&x,&s);
 x=x+s;
 s=x-s;
 x=x-s;

 printf("the two numbers after swap :- a is %d, b is %d",x,s);
 
 return 0;
}

*/

/*program no. 5*/
/*program to sum of threee digit numbers*/
/*
#include<stdio.h>
int main()
{
    int n,s=0,rem;
    printf("enter three digit number");
    scanf("%d",&n);


    rem=n%10;
    s=s+rem;
    n=n/10;
 
 
    rem=n%10;
    s=s+rem;
 n=n/10;
 
    rem=n%10;
    s=s+rem;
 n=n/10;

    printf("the sum is %d",s);
}
*/

/*program no.6*/
/*

#include<stdio.h>
int main()
{
    char s;
    printf("enter the name\n");
    scanf("%c",&s);
    printf("the character is%d",s);
    return 0;
}
*/
/*program no. 7*/
// #include<stdio.h>
// int main()
// {
//     int x=8,count=0;
//     int result=0;
 
// while(x!=0)
// {
//     result= x&1;
//     count++;
// if(result==1)
// {
//     printf("the value of count is %d",count);
// break;
// }
// x>>1;
// }
// }


















/*program no.8*/
/*
#include<stdio.h>
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(num%2)
    {
     printf("the number is odd");
       
    }
    else{
        printf("the number is even");
    }
return 0;
}
*/

/*program no. 9*/
/*
#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("\nthe size of int is:-%d",sizeof(int));
printf("\nthe size of int is:-%d",sizeof(a));
printf("\nthe size of float is:-%ld",sizeof(float));
printf("\nthe size of float is:-%ld",sizeof(b));
printf("\nthe size of char is:-%ld",sizeof(char));
printf("\nthe size of char is:-%ld",sizeof(c));
printf("\nthe size of double is:-%ld",sizeof(double));
printf("\nthe size of double is:-%d",sizeof(d));
}
*/

/*program no.10*/

/*
#include<stdio.h>
int main()
{
    int num,a;
    printf("enter the num");
    scanf("%d",&num);
    a=(num/10)*10;
    
    printf("the number is %d",a);
    return 0;
}*/

/*program no.11*/

// #include<stdio.h>
// int main()
// {
//     int num,a,d;
//     printf("enter the num");
//     scanf("%d",&num);
//     printf("enter the digit");
//     scanf("%d",&d);
//     a=(num*10)+d;
 
    
//     printf("the number is %d",a);
//     return 0;
// }

/*program no.12*/
#include<stdio.h>
int main()
{
    int x;
    float usd;
    printf("enter the amount in inr");
    scanf("%d",&x);
    usd=x*76.25;
    printf("amount in usd is %f",usd);
    return 0;
}















// /*program no. 13*/
   

// #include<stdio.h>
// int main()
// {
//     int num,a,b;
//     printf("enter the three digit num");
//     scanf("%d",&num);
//     a=(num%10);
//     b=num/10;
//     a=a*100+b;
    
//     printf("the number is %d",a);
//     return 0;
// }


// */