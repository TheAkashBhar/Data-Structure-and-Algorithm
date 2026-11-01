
// function declare
/*
void hello()
{
    cout << "Hello";
}


hello(); // Call function
*/

// syntax

/*

returnType fName(type parameter1, type parameter 2 = some cod--> default parameter){
    //code
    return someValue; //Optional
    }

    */

// fName(argument,secargument);

// function declaration: the function's name, return type, and parameters (if any)
// Definition: the body of the function

// Forward declaration of function like this:-
/*
for eg:-
void hello();

int main(){ return 0; / code }

void hello(){
   // code
    }
    */


    // Memory stack for function 
    // whenever function execute it create a layer and locate called stack frame 

    /*
    |          |
    |__________|
    |          |
    |__________|
    |          |  } stack frame
    |__________|  }
        stack
    */
   // *current function is at the top of the stack.


#include <iostream>
using namespace std;

/*
int sum(int a, int b = 4)
{
    int sum = a + b;
    return sum;
}

int evenOdd(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
*/


int factorial(int a){
    int fact = 1;
    for (int i = 1; i <=a; i++)
    {
        fact *= i; // sum = sum *i;
    }
    return fact;
}

//Scope--> area where a variable can be accessed or used.
// local v/s Global scope of variables

// local scope 
// function , for loop , { code } etc.. ==> if any variable is assign in this then it cannot be access outside.

// Global Scope 
// Any variable declare ouside function can be access by others


int main()
{
    /*
    int s = sum(2, 4);
    cout << "Sum : " << s;

    int num = evenOdd(7);
    if (num)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    */

    int f = factorial(4);
    cout << "Factorial : "<< f << endl;

    return 0;
}
