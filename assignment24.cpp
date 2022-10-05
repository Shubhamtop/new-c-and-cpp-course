// /*1. Define a function to check whether a given number is a Prime number or not.*/
// #include <iostream>
// using namespace std;
// int prime(int n)
// {
//     int flag = 0, i;
//     for (i = 2; i < n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             flag = 1;
//             cout << "flag changed\n";
//             break;
//         }
//     }
//     return flag;
// }

// int main()
// {
//     int x = 17;
//     if (prime(x) == 0)
//         cout << "number is prime";
//     else
//         cout << "number is not prime";
// }

// /*2. Define a function to find the highest value digit in a given number.*/
// #include <iostream>
// #include <conio.h>
// void check(int n)
// {
//     int rem = 0, a;
//     while (n != 0)
//     {
//         a = n % 10;
//         n = n / 10;
//         (rem < a)
//     }
// }

// int main()

// {
//     int x;
//     cout << "enter a number";
//     cin >> x;
// }

/*3. Define a function to calculate x raised to the power y.*/
// #include <iostream>
// #include <conio.h>
// #include <math.h>
// using namespace std;
// int cal(int x, int y)
// {
//     int res;
//     res = pow(x, y);
//     return res;
// }

// int main()

// {
//     int x, y, res;
//     cout << "enter a number and its power";
//     cin >> x >> y;
//     res = cal(x, y);
//     cout << "the x is " << x << " y is " << y << " result is " << res;
//     return 0;
// }

/*4. Define a function to print Pascal Triangle up to N lines.*/























// /*8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle*/
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int area(int a,int b)
// {
//     int ar;
//     ar=a*b;
// return ar;
    
// }

// int area(int r)
// {
//     float ar;
//     ar=3.14*r*r;
// return ar;
    
// }

// int area(int a,int b,int c)
// {
//     float ar;
//     ar=0.5*(a+b+c);
// return ar;
    
// }



// int main()
// {
//     float a,b,c;
//     float r;

//     cout<<"enter the value of a and b "<<endl;
//     cin>>a>>b;
//     cout<<"area of rectangle is "<<area(a,b)<<endl;
//     cout<<"enter the length of radius"<<endl;
//     cin>>r;
//     cout<<"area of circle"<<area(r)<<endl;
//     cout<<"emter the length of triangle a,b and c"<<endl;
//     cin>>a>>b>>c;
//     cout<<area(a,b,c);
//     getch();



// }


/*

9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/


#include<iostream>
#include<conio.h>
using namespace std;

int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}

float max(float a,float b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int a,b;
    float c,d;
    
    cout<<"enter the value of  integgerr a and b "<<endl;
    cin>>a>>b;
    cout<<endl<<"the largest value in both int value is"<<max(a,b);
    cout<<"enter the value of real a and b"<<endl;
    cin>>c>>d;
    cout<<max(c,d);
}


/*10. Write functions using function overloading to add two numbers having different data
// types.*/


// #include<iostream>
// #include<conio.h>
// using namespace std;
// int sum(int a,int b)
// {
//     int ar;
//     ar=a+b;
// return ar;
// }
// float sum(float a,float b)
// {
//     float ar;
//     ar=a+b;
// return ar;
// }
// double sum( double a,double b)
// {
//     double ar;
//     ar=a+b;
// return ar;
// }
// int main()
// {
//     int a,b;
//     float c,d;
//     double e,f;


//     cout<<"enter the value of  integgerr a and b "<<endl;
//     cin>>a>>b;

//  cout<<sum(a,b);
//  cout<<"enter the  value of float c and d"<<endl;
//  cin>>c>>d;
//  cout<<sum(c,d);
//  cout<<"enter the value of double e and f"<<endl;
//  cin>>e>>f;
//  cout<<sum(e,f);
// }

