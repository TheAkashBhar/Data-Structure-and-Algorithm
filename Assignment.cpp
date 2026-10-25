#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int main()
{

    int English, Math, Science, Avg;

    cout << "Enter your Marks" << endl;
    cout << "English:";
    cin >> English;
    cout << "Math:";
    cin >> Math;
    cout << "Science:";
    cin >> Science;

    Avg = (English + Math + Science) / 3;
    cout << "Average Marks:" << Avg << endl;

    // Assignment
    // Q1
    int n, area;
    cout << "Enter number area of square";
    cin >> n;

    area = n * n;
    cout << "Area of square = " << area;

    // Q2
    float pencil, pen, eraser;
    cout << "Enter price of Stuff" << endl;
    cout << "Enter pencil cost";
    cin >> pencil;
    cout << "Enter pen cost";
    cin >> pen;
    cout << "Enter eraser cost";
    cin >> eraser;

    float Bill = (pencil + pen + eraser);
    float GST = Bill * 18 / 100;
    float finalBill = GST + Bill;

    cout << "Total Bill + 18% GST=" << finalBill << endl;

    // Q3

    float p, t, r;

    cout << "Enter principal";
    cin >> p;
    cout << "Enter time";
    cin >> t;
    cout << "Enter rate";
    cin >> r;

    float SI = (p * t * r) / 100;
    cout << "Simple interest = " << SI;

    // //Q4
    float r, area;

    cout<<"Enter radius";
    cin>>r;
    area = PI*r*r;
    cout<<"Area of circle ="<<area;

    // loop assignment

    // Factorial Question

    int n = 5;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial = " << fact << endl;

    // Multiplication Question

    int numb;
    cout << "Enter number :" << endl;
    cin >> numb;

    for (int i = 0; i <= 10; i++)
    {
        cout << numb << "*" << i << "=" << numb * i << endl;
    // }

    // Armstrong number ---> An Armstrong number is a number that is equal to the sum of cubes of its digits.

    int n = 324;
    int num = n;
    int cubesum = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        cubesum = cubesum + lastdigit * lastdigit * lastdigit;
        num = num / 10;
    }

    if (n == cubesum)
    {
        cout << "It is ArmsStrong number" << endl;
    }
    else
    {
        cout << "It is not ArmsStrong number" << endl;
    }

    // To print all Prime Number of N (Assume N >= 2)

    int N = 15;
    for (int i = 2; i <= N; i++)
    {
        int curr = i; // current number to check for
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (curr % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << curr << " ";
        }
    }
    cout << endl;


    // Fibonacci (Assume N >= 2)

    int n = 10;
    int first = 0, sec = 1;
    cout << first << " " << sec << " ";

    for (int i = 2; i < n; i++)
    {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }

    cout << "\n";

    return 0;
}