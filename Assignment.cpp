#include <iostream>
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

    cout << "Total Bill + 18% GST=" << finalBill;

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
    // float r, area;
    
    // cout<<"Enter radius";
    // cin>>r;
    // area = PI*r*r;
    // cout<<"Area of circle ="<<area;

    return 0;
}