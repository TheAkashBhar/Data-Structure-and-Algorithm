#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // For Loop Concept

    // //Syntax
    //  INTIALIZATION;  CONDITION; UPDATION
    // for ( int i = 0;     i < count;   i++)
    // {
    //     /* code */
    // }

    int a;
    cout << "Enter number:" << endl;
    cin >> a;

    int sum = 0;

    // //To print N number
    for (int i = 0; i < a; i++)
    {
        cout << i << endl;
    }

    // To print sum of n number
    for (int i = 0; i <= a; i++)
    {
        sum = sum + i; // sum += i;
        cout << i << endl;
    }
    cout << "Sum = " << sum;

    // While Loop Concept

    // Syntax

    // int num = 1;           INTIALIZATION
    // while (num <= 10)       CONDITION
    // {
    //     cout << num << endl;
    //     num++;                 UPDATION
    // }

    int num = 1;
    while (num <= 10)
    {
        cout << num << endl;
        num++;
    }

    // To print sum of n numbers

    int a = 5;
    int i = 0;
    int sum = 0;

    while (i <= a)
    {
        cout << i << endl;
        sum = sum + i;
        i++;
    }

    // Qs 3 To print sum of digit

    int sum = 0;
    int n = 2933;

    while (n > 0)
    {
        int lastdigits = n % 10;
        cout << lastdigits;
        sum += lastdigits;
        n = n / 10;
    }

    cout << " " << "Sum =" << sum;

    // // Qs 4 sum of Odd digits
    int n = 10829;
    int sum = 0;

    while (n > 0)
    {
        int lastDig = n % 10;
        if (lastDig % 2 != 0)
        {
            sum += lastDig;
        }
        n = n / 10;
    }
    cout << "Sum =" << sum << endl;

    cout << "Sum = " << sum << endl;

    int res = 0;
    int n = 3928421;

    while (n > 0)
    {
        int lastdigit = n % 10;
        res = res * 10 + lastdigit;
        n = n / 10;
    }
    cout << "Reverse = " << res;

    // Qs 1 To print start

    for (int i = 0; i < 4; i++)
    {
        cout << "****" << endl;
    }

    // Qs 2 Reverse number print

    for (int i = 5; i >= 1; i--)
    {
        cout << i << endl;
    }

    // DO-While Loop ---> At least it perform the task one time compulsory weather the condition is true/false

    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 5);

    // Break Keyword

    int i = 0;
    while (i<=10)
    {
        if (i==3)
        {
            break;
        }
        cout << i << endl;
        i++;
    }

    int n;

    do
    {
        cout << "Enter number :";
        cin >> n;
        if (n % 10 == 0)
        {
            break;
        }
        cout << "You Enter :" << n << endl;
    } while (true);

    // Continue Keyword ---> to skip iteration

    for (int i = 0; i <= 10; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }

    int n;

    do
    {
        cout << "Enter number :";
        cin >> n;
        if (n % 10 == 0){
            continue;
        }
        cout << "You Enter :" << n << endl;
    } while (true);

    // Prime or composite

    int n;
    cout << "Enter a numbers: ";
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "It is prime";
    }
    else
    {
        cout << "It is Composite";
    }

    return 0;
}