
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

returnType fName(type parameter1, type parameter 2){
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
    code
    }
    */

#include <iostream>
using namespace std;

void hello()
{
    cout << "Hello \n";
}

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    hello(); // Call function
    int s = sum(2,4);
    cout << "Sum : " << s;
    return 0;
}
