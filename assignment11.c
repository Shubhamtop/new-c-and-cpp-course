
/*1. Write a function to calculate LCM of two numbers. (TSRS)*/
// #include<stdio.h>
// void  lcm(int a,int b)
// {
//     int max;
//     max=(a>b)?a:b;
//     while(1)
//     {
//         if((max%a==0)&&(max%b==0))
//         {
//             printf("the lcm of %d and the %d is %d",a,b,max);
//             break;

//         }
//         max++;
//     }

// }



// int main()
// {
//     int a=6,b=15;
//     lcm(a,b);

// }

/*2. Write a function to calculate HCF of two numbers. (TSRS)*/
/*3. Write a function to check whether a given number is Prime or not. (TSRS)*/
#include<stdio.h>
void prime(int n)
{
    int count=0,i;
    for ( i = 2; i <= n; i++)
    {
       if(n%i==0)
       {
        count++;
       }
    }
    
    if(count==1)
    {
        printf("number is prime ");
    
    }
    else{
        printf("number is not prime");
    }
}


int main()
{
    int n=5,c;
   c= prime(n);
}

/*4. Write a function to find the next prime number of a given number. (TSRS)*/
