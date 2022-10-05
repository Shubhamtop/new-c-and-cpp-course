/*1. Write a C++ program to print Hello MySirG on the screen.*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Hello MysirG";
//     return 0;
// }
// 
/*Write a C++ program to print Hello on the first line and MySirG on the second line
using endl.*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"HEllo"<<endl;
//     cout<<"MySirG";
// }

/*3. Write a C++ program to calculate the sum of two numbers.*/
// #include<iostream>
// using namespace std;
// int main()
// {
//    int a,b,sum;
//    cout<<"enter the two numbers";
//    cin>>a>>b;
//    sum=a+b;
//    cout<<"sum is"<<sum;

// }

/*4. Write a C++ program to calculate the area of a circle*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int r;
//     float area;
//     cout<<"enter the radius of circle";
//     cin>>r;
//     area=3.14*r*r;
//     cout<<"area of circle is:"<<area;
// }
/*5. Write a C++ program to calculate the volume of a cuboid.*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int s;
//     cout<<"enter the side of cuboid";
//     cin>>s;
//     cout<<"voume of cuboid is:-"<<s*s*s;
// }

/*6. Write a C++ program to calculate an average of 3 numbers.*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"enter the three numbers";
//     cin>>a>>b>>c;
//     cout<<"Average of the numbers is"<<a+b+c/3;

// }

// 7. Write a C++ program to calculate the square of a number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter the the number";
//     cin>>a;
//     cout<<"square of the number"<<a*a;
//}


/*8. Write a C++ program to swap values of two int variables 
without using third variable
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"enter the two number";
//     cin>>a>>b;
//     cout<<"value of a is:="<<a<<" b="<<b<<endl;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"value of a is:="<<a<<" b="<<b;
// }

//9. Write a C++ program to find the maximum of two numbers.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"enter the two number";
//     cin>>a>>b;
//     cout<<"value of a is:="<<a<<" b="<<b<<endl;
//    if(a>b)
//    cout<<"a is greater"<<endl;
//    else
//    cout<<"b is greater"<<endl;
// }


//10. Write a C++ program to add all the numbers of an array of size 10.
 #include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"enter the elemnt of array";
        for(i=0;i<10;i++)
      
     cin>>a[i];
    
      for(i=0;i<10;i++)
    
       sum=sum+a[i];
        cout<<"the sum is:-"<<sum;
}
