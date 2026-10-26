#include <iostream>
using namespace std;

int main()
{

  // NESTED LOOP CONCEPT

  /* Outer loop --> no of Row
     Inner loop --> no of columns / Each row

     columns
       |
     1 1 1 1 ---> rows
     2 2 2 2
     3 3 3 3
     4 4 4 4
  */

  // outer loop
  // for (int i = 1; i <= 4; i++) // For row
  // {
  //     // inner loop
  //     for (int j = 1; j <= 4; j++)  // For column
  //     {
  //         cout << i << " ";
  //     }
  //     cout << endl;

  // }

  // Pyramid

  /*

  *
  **
  ***
  ****

  */

  // for (int i = 1; i <=4; i++)
  // {
  //     for (int j = 1; j <= i ; j++)
  //     {
  //         cout << '*';
  //     }
  //     cout << endl;

  // }

  // Inverted Pyramid

  /*

  ****
  ***
  **
  *

  */

  // int n = 7;

  // for (int i = 1; i <= n; i++)
  // {
  //     for (int j = 1; j <= (n-i+1); j++)
  //     {
  //         cout << '*';
  //     }
  //     cout << endl;
  // }

  // Half pyramid patter

  /*

  1
  12
  123
  1234

  */

  // for (int i = 1; i <= 4; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }

  /*

  1
  22
  333
  4444

  */

  // for (int i = 1; i <= 4; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << i;
  //   }
  //   cout << endl;
  // }

  /*

  A
  BC
  DEF
  GHIJ

  */

  //  char ch = 'A';

  //   for (int i = 1; i <=4; i++)
  //   {
  //     for (int j = 1; j <= i; j++)
  //     {
  //       cout << ch++; // post increment
  //       ch++;
  //     }
  //     cout << endl;

  //   }

  // Hollow Rectangle pattern

  /*

  *****
  *   *
  *   *
  *****

  */

  // int n = 5;

  // for (int i = 1; i <= n; i++)
  // {
  //   cout << '*';

  //   for (int j = 1; j <= n; j++)
  //   {
  //     if (i == 1 || i == n)
  //     {
  //       cout << '*';
  //     }
  //     else
  //     {
  //       cout << ' ';
  //     }
  //   }
  //   cout << '*';

  //   cout << endl;
  // }

  

  return 0;
}