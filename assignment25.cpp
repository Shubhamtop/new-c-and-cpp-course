/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class complex
// {
//     private:
//     int real ,imag;
//     public:
//     void set(int a,int b)
//     {
//         real=a;
//         imag=b;

//     }
//     void show()
//     {
//         cout<<"complex is "<<real<<"+i"<<imag<<endl;

//     }

// };
// int main()
// {
//     complex c1,c2;
//     c1.set(4,3);
//     c2.set(8,4);

//     c1.show();
//     c2.show();
//     getch();
// }

/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class time1
// {
//     private:
//     int hr,min,sec;
//     public:
//     void set(int a,int b,int c)
//     {
//         hr=a;
//         min=b;
//         sec=c;
//     }
//     void show()
//     {
//         cout<<"time is:="<<" hr "<<hr<<" min "<<min<<" sec "<<sec<<endl;

//     }
// };

// int main()
// {
//     time1 t1,t2;
//     t1.set(4,5,55);
//     t2.set(6,4,60);
//     t1.show();
//     t2.show();
//     getch();

//  }

/*3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.*/
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class fact
// {
//     int f=1,i;
//     public:
//     void input(int x)
//     {

//         for ( i = 1; i <= x; i++)
//         {
//             f=f*i;
//         }

// }
// void show()
// {
//     cout<<"factorial of thenumber is "<<f;
// }

// };
// int main()
// {
//     int x;
//     fact f1,f2;
//     cout<<"enter the value of x";
//     cin>>x;
//     f1.input(x);
//     f1.show();
//     cout<<"enter the value of x";
//     cin>>x;a
//     f2.input(x);
//     f2.show();
//     getch();
// }
/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class Largestnumber
// {
// private:
// int a,b,c;
// public:
// void print(int a,int b,int c)
// {

// cout<<"value of a"<<a<<"value of b"<<b<<"value of c"<<c;
// }
// void cal(int a,int b,int c)
// {

//    if(a>b)
//    {
//     if(a>c)
//     printf("a is greater");
//     else
//     printf("c is greater");
//    }
//    else
//    {
//     if(b>c)
//     printf("b is greater");
//     else
//     printf(" c is greater");
//    }

// }

// };

// int main()
// {

//     Largestnumber l1;
//     l1.print(111,3,22);
//     l1.cal(1,3,22);
//     }

/*5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.*/
// #include <iostream>
// #include <conio.h>
// using namespace std;
// class reversenumber
// {
//     private:
//     int n, rem, rev = 0;

// public:
//     void get(int n)
//     {
//         cout << "value of n is " << n;
//     }
//     void cal()
//     {
//         while (n != 0)
//         {
//             rem = n % 10;
//             rev = rev * 10 + rem;
//             n = n / 10;
//         }
//         cout << "reverse number is " << rev;
//     }
// };
// int main()
// {
//     int n;
//     reversenumber r1;
//     cout << "enter the value of n";
//     cin >> n;
//     r1.get(n);
//     r1.cal();
// }

/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.-*/
// #include<iostream>
// #include<conio.h>
// using namespace std;
// class square
// {
//     private:
//     int sq,n;
//     static int count;
//     public:
//     void get()
//     {
//         cout<<"enter the  value of n is";
// cin>>n;
//     }
//     void cal()
//     {
//         sq=n*n;
//         count++;

//     }
//     void print()
//     {
//         cout<<"the square of number is "<<sq<<endl;
//         cout<<"square function calculate times"<<count;
//     }
// };
// int square:: count=0;
// int main()
// {
//     square s1,s2,s3;
//     s1.get();
//     s1.cal();
//     s2.get();
//     s2.cal();
//      s3.get();
//     s3.cal();
//     s3.print();
// }
/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
// #include <iostream>
// #include <conio.h>
// using namespace std;
// class area
// {
// private:
//     int l, b, ar;

// public:
//     void get()
//     {
//         cout << "enter the length and breath" << endl;
//         cin >> l >> b;
//     }
//     void cal()
//     {
//         ar = l * b;
//         cout << "area of rectangle is " << ar << endl;
//     }
// };
// int main()
// {
//     area a1, a2;
//     a1.get();
//     a2.get();
//     a1.cal();
//     a2.cal();
// }

/*9. Define a class Circle and define an instance member function to find the area of the
// circle.*/
//  #include <iostream>
// #include <conio.h>
// using namespace std;
// class area
// {
// private:
//     int r ;
//     float ar;
// public:
//     void get()
//     {
//         cout << "enter the radius "<< endl;
//         cin >> r;
//     }
//     void cal()
//     {
//         ar = 3.14*r*r;
//         cout << "area of rectangle is " << ar << endl;
//     }
// };
// int main()
// {
//     area a1, a2;
//     a1.get();
//     a2.get();
//     a1.cal();
//     a2.cal();
//     }
    /*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/
#include<iostream>
#include<conio.h>
using namespace std;
class area
{
    private:
    float length,width,side,radius;
    public:
    float circle(float r)
    {
        radius=r;
    }
    float rectangle(float l,float b)
    {
        length=l;
        width=b;
    }
    float square(float s)
    {
        side=s;
    }
    float areaofcircle()
    {
        return 3.14*radius*radius;
    }
    float areaofrectangle(){
        return length*width;
    }
    float areaofsquare()
    {
        return side*side;
    }
    
};
int main()
{
    area a1,a2,a3;
    a1.circle(6);
    a1.square(3);
    a1.rectangle(7,5);
    cout<<"area of circle is"<<a1.areaofcircle()<<endl;
    cout<<"area of rect is"<<a1.areaofrectangle()<<endl;
    cout<<"area of square is"<<a1.areaofsquare()<<endl;
}