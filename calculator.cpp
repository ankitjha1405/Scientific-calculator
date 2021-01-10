#include <iostream>
#include <unistd.h>
#include <math.h>
using namespace std;
int pi=3.1415;

void arit();
void sci();
void trigo();
void area();
int main()
{
    cout << "Enter 1 for arithematic operatins(+,-,*,/) \n";
    cout << "Enter 2 for scientific operations(power, log,natural log, ) \n";
    cout << "Enter 3 for trigonometric operations \n";
    cout << "Enter 4 for area calculations \n";
    long long int n;
    cin >> n;
    switch (n)
    {
    case 1:
        arit();
        break;
    case 2:
        sci();
        break;
    case 3:
        trigo();
        break;
    case 4:
        area();
        break;
    }
    return 0;
}

// basic calculator using simple arithematic operations

void arit()
{
    cout << "Which function you want to perform \n";
    sleep(0.5);
    cout << "Enter 1 for sum \n";
    cout << "Enter 2 for sub \n";
    cout << "Enter 3 for mul \n";
    cout << "Enter 4 for div \n";
    cout << "Enter 0 for go Back \n";
    int no;
    cin >> no;
    if (no == 0)
    {
        main();
    }
    int n1 = 0;
    int n2 = 0;
    cin >> n1 >> n2;
    if (no == 1)
    {
        cout << "Sum is " << n1 + n2 << endl;
    }
    else if (no == 2)
    {
        cout << "Sub is " << n1 - n2 << endl;
    }
    else if (no == 3)
    {
        cout << "Mul is " << n1 * n2 << endl;
    }
    else if (no == 4)
    {
        cout << "Div is" << n1 / n2 << endl;
    }
    else
    {
        cout << "enter a correct value \n";
        cout << "Returning to previous step \n";
        sleep(1);
        arit();
    }
}
// scientific calculator including power, log, square, cubic,natural log

void sci()
{
    cout << "Which function you want to perform \n";
    cout << "Enter 1 for pow \n";
    cout << "Enter 2 for log \n";
    cout << "Enter 3 for natural log \n";
    cout << "Enter 4 for square \n";
    cout << "Enter 5 for cube \n";
    cout << "Enter 0 for go Back \n";
    int no;
    cin >> no;
    int n1 = 0, n2 = 0, n3 = 0;
    if (no == 0)
    {
        main();
    }
    if (no == 1)
    {
        cout << "First no whose power you want to calculate \n";
        cin >> n1;
        cout << "Which power you want to calculate \n";
        cin >> n2;
        cout << "The" << n2 << "power of " << n1 << pow(n1, n2);
    }
    else if (no == 2)
    {
        cout << "Enter the number whose log you want" << endl;
        cin >> n1;
        cout << "Enter the base for log" << endl;
        cin >> n2;
        cout << log(n1) / log(n2);
    }
    else if (no == 3)
    {
        cout << "Enter a number" << endl;
        cin >> n3;
        cout << log(n3) << endl;
    }
    else if (no == 4)
    {
        cout << "Enter a number" << endl;
        cin >> n3;
        cout << pow(n3, 2);
    }
    else if (no == 5)
    {
        cout << "Enter a number" << endl;
        cin >> n3;
        cout << pow(n3, 3);
    }
    else
    {
        cout << "Enter a valid number \n";
        cout << "Returning to previous step \n";
        sleep(1);
        sci();
    }
}

// Trigonometric calculator

void trigo()
{
    cout << "Which function you want to perform \n";
    cout << "Enter 1 for sin(x) \n";
    cout << "Enter 2 for cos(x) \n";
    cout << "Enter 3 for tan(x) \n";
    cout << "Enter 4 for cot(x) \n";
    cout << "Enter 5 for cosec(x) \n";
    cout << "Enter 6 for sec(x) \n";
    cout << "Enter 7 for sin inverse \n";
    cout << "Enter 8 for cos inverse \n";
    cout << "Enter 9 for tan inverse \n";
    cout << "Enter 10 for cot inverse \n";
    cout << "Enter 11 for cosec inverse \n";
    cout << "Enter 12 for sec inverse \n";
    cout << "Enter 0 for go Back \n";
    int no;
    cin >> no;
    float n = 0;
    if (no == 0)
    {
        main();
    }
    if (no == 1)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << sin(n);
    }
    else if (no == 2)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << cos(n);
    }
    else if (no == 3)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << tan(n);
    }
    else if (no == 4)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << 1 / tan(n);
    }
    else if (no == 5)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << 1 / sin(n);
        (n);
    }
    else if (no == 6)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << 1 / cos(n);
    }
    else if (no == 7)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << asin(n);
    }
    else if (no == 8)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << acos(n);
    }
    else if (no == 9)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << atan(n);
    }
    else if (no == 10)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << atan(1 / n);
    }
    else if (no == 11)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << asin(1 / n);
    }
    else if (no == 12)
    {
        cout << "Enter a value in radians \n"
             << endl;
        cin >> n;
        cout << acos(1 / n);
    }
    else
    {
        cout << "Please enter a valid input \n"
             << endl
             << "Returning to previous page \n";
        sleep(1);
        trigo();
    }
}
void area()
{
    cout << "Which function you want to perform \n";
    cout << "Enter 1 for area of square \n";
    cout << "Enter 2 for area of rectangle \n";
    cout << "Enter 3 for area of circle \n";
    cout << "Enter 4 for area of triangle \n";
    // cout << "Enter 1 for area of  \n";
    cout << "Enter 0 for go Back \n";

    int no;
    cin>>no;
    int n1=0;
    int n2=0;
    int n3=0;
    if(no==0){
        main();
    }
    if(no==1)
    {
        cout<<"Enter the side of square \n";
        cin>>n1;
        cout<<"Area is: "<<n1*n1;
    }
    else if(no==2)
    {
        cout<<"Enter the length \n";
        cin>>n1;
        cout<<"Enter the bredth \n";
        cin>>n2;
        cout<<"Area is: "<<n1*n2;
    }
    else if(no==3)
    {
        cout<<"Enter the radius of circle \n";
        cin>>n1;
        cout<<"Area is: "<<pi*n1*n1;
    }
   else if(no==4)
    {
        cout<<"Enter the sides of triangle \n";
        cin>>n1>>n2>>n3;
        float a= (n1+n2+n3)/2;
        float b= (a*(a-n1)*(a-n2)*(a-n3));
        float c= pow(b,0.5);
        cout<<"Area is: "<<c;
    }
    else
    {
        cout << "Please enter a valid input \n"<<endl<<"Returning to previous page \n";
        sleep(1);
        area();
    }
    
}
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int length;
// cin>>length;
// int nos;
// cin>>nos;
// float peri=nos*length;
// cout<<peri;
// float angle= ((nos-2) * 3.1415)/nos;
// long double a= length*sin((angle/2));
// cout<<(a*peri)/2;
// return 0;
// }
