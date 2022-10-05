// asssignment no. 5
// program no. 1
/*wap to print my sir g n times on the screen*/
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("MySirG\n");
//     }
// }

// /*program no. 2*/
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("\nfirst natural number %d",i);
//     }
// }

// /*program no. 3*/
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         printf("\n natural number %d",i);
//     }
// }

/*program no.4*/
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         if(i%2==1)
//         printf("\nfirst n odd number %d",i);
//     }
// }

/*program no. 5*/
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         if(i%2==1)
//         printf("\nfirst n odd number %d",i);
//     }
// }

// /*program no.6*/
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         if(i%2==0)
//         printf("\nfirst n even number %d",i);
//     }
// }

// /*program no.7*/
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         if(i%2==0)
//         printf("\nfirst n even number in reverse order= %d",i);
//     }
// }

// /*program no.8*/
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     printf("enter the value of n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {

//         printf("\n %d natural number square= %d", i, i * i);
//     }
// }

// /*program no.9*/
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     printf("enter the value of n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {

//         printf("\n %d natural number cube= %d", i, i * i * i);
//     }
// }

/*program no.10*/
 #include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number whose find table of ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
       printf("\ntable of natural number is=%d*%d=%d",n,i,i*n);
}
}