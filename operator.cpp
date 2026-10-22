#include <iostream>
#define PI 3.14 // --> we not use symbolic constatnt for variable const

// Symbolic constant ----> data type symbolic constant // datatype modifier
#define ll long long
using namespace std;

int main()
{

    // constant --> variable that cannot be change
    const int n = 25; // must be initialized
    const float num1 = 25.4;
    const float pi = 3.14; //--> we use here

    ll x = 43; //--> here ll means long long

    // TypeCasting

    // Implicit conversion (auto/type promotion)
    // bool->char->int->float->double

    cout << (10 / 3) << endl;
    cout << (10 / 3.0) << endl;
    cout << ('A' + 1) << endl;

    // Explicit Conversion (manually)

    float num2 = 3.4;
    cout << (int)(num2) << endl;
    cout << ((float)10 / 3) << endl; // change numenator or denominator to get in float value
    cout << (char)('A' + 1) << endl;

    cout << ((bool)3 + 2) << endl; // bool give 1 for true and 0 for false also bool give true 1 in number whether it is in minus but if 0 then false 0
    cout << (23.5 + 2 + 'A') << endl;

    // Operators --> helps to perform the task

    // A+B --> expression
    //+ ---> operators
    //  A,B --> operands

    // Arithmetic operator
    int a = 9;
    int b = 29;

    cout << "+ " << (a + b) << endl; // addition
    cout << "- " << (a - b) << endl; // subtract
    cout << "* " << (a * b) << endl; // multiply
    cout << "/ " << (a / b) << endl; // divison
    cout << "% " << (a % b) << endl; // modulo (remainder)

    // Unary operators

    // Increment ++
    //  a = a+1 / a++
    // Decrement --
    //  a = a-1 / a--

    // a++ ---> post increment / use and update
    //++a ---> pre increment / update and use

    // a-- ---> post decrement / use and decrease
    //--a ---> pre decrement / decrease and use

    // Assignment/Compound Operators

    // =   a=b
    // +=   a=a+7   a+=7
    // -=   a=a-6   a-=6
    // *=   a=a*9   a*=9
    // /=   a=a/2   a/=2

    // Relation Operators  --> T -- 1 / F -- 0
    // ==   a==b
    // >=   a>=b
    // <=   a<=b
    // >    a>b
    // <    a<b
    // !=   a!=b

    // Logical Operators
    // AND (&&) --- Binary
    // OR (||)  --- Binary
    // NOT (!)  ---> unary

    int c = 10;
    int d = 5;
    int exp1 = (d * (c / d + c / d));
    int exp2 = (d * c / d + d * c / d);
    cout << exp1 << " ";
    cout << exp2 << "\n";

    // Operator Precedence in C++

    // Conditional Statement

    int age = 20;

    if (age >= 18){
        cout << "can vote" << endl;
    }else{
        cout << "cannot vote" << endl;
    }

    int num3 = 13;
    int num4 = 23;

    if (num3 > num4){
        cout << num3 << "is large number" << endl;
    }else{
        cout << num4 << " is large number" << endl;
    }

    int num5;
    cout << "enter number" << endl;
    cin >> num5;

    if (num5 % 2 == 0){
        cout << "It is even" << endl;
    }else{
        cout << "It is odd" << endl;
    }

    int income, tax;
    cout << "Enter your income in lakhs" << endl;
    cin >> income;

    if (income < 5){
        tax = 0;
    }else if (income <= 10){
        tax = 0.2 * income;
    }else{
        tax = 0.3 * income;
    }

    cout << "Tax = " << (tax * 100000) << endl;

    // Ternary Operator
    //  variable = condition ? statement1 : statement2;

    bool isAdult = (age >= 18) ? true : false;

    // Switch statement

    int day = 6;

    switch (day)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    default:
        cout << "Wrong num";
    }

    // Calculator using switch case

    int a;
    int b;
    char operators;

    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    cout << "Enter operators +,-,*,/" << endl;
    cin >> operators;

    switch (operators)
    {
    case '+':
        cout << "Add = " << (a + b) << endl;
        break;
    case '-':
        cout << "Subtract = " << (a - b) << endl;
        break;
    case '*':
        cout << "Multiply = " << (a * b) << endl;
        break;
    case '/':
        cout << "Divide = " << (a / b) << endl;
        break;
    default:
        cout << "Enter correct" << endl;
    }

    int num;
    cout << "Enter number :" << endl;
    cin >> num;4
    if (num > 0)
    {
        cout << "It is positive number" << endl;
    }
    else if (num < 0)
    {
        cout << "It is negative number" << endl;
    }
    else
    {
        cout << "It is zero" << endl;
    }

    int n;
    cout << "enter a 3 digit number : ";
    cin >> n;

    int num = n; // creating a copy
    int dig1 = num % 10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;
    int cubeSum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;

    if (cubeSum == n)
    {
        cout << n << " is an Armstrong Number\n";
    }
    else
    {
        cout << n << " is NOT an Armstrong Number\n";
    }

    //typedef does not create a new data type. It creates another name for an existing data type.

    typedef int number;
    number age = 34;


    return 0;
}