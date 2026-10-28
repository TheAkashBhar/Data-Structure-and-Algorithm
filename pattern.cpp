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
  for (int i = 1; i <= 4; i++) // For row
  {
      // inner loop
      for (int j = 1; j <= 4; j++)  // For column
      {
          cout << i << " ";
      }
      cout << endl;

  }

  // Pyramid

  /*

  *
  **
  ***
  ****

  */

  for (int i = 1; i <=4; i++)
  {
      for (int j = 1; j <= i ; j++)
      {
          cout << '*';
      }
      cout << endl;
 
    }

  // Inverted Pyramid

  /*

  ****
  ***
  **
  *

  */

  int n = 7;

  for (int i = 1; i <= n; i++)
  {
      for (int j = 1; j <= (n-i+1); j++)
      {
          cout << '*';
      }
      cout << endl;
  }

  // Half pyramid patter

  /*

  1
  12
  123
  1234

  */

  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }

  /*

  1
  22
  333
  4444

  */

  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }

  /*

  A
  BC
  DEF
  GHIJ

  */

   char ch = 'A';

    for (int i = 1; i <=4; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        cout << ch++; // post increment
        ch++;
      }
      cout << endl;

    }

  // Hollow Rectangle pattern

  /*

  *****
  *   *
  *   *
  *****

  */

  int n = 5;

  for (int i = 1; i <= n; i++)
  {
    cout << '*';

    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || i == n)
      {
        cout << '*';
      }
      else
      {
        cout << ' ';
      }
    }
    cout << '*';

    cout << endl;
  }

  // Inverted and Rotated Pyramid

  /*
     *
    **
   ***
  ****

  */

  int n = 4;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << ' ';
    }

    for (int k = 1; k <= i; k++)
    {
      cout << '*';
    }
    cout << endl;
  }

  // Floyd's Triangle

  /*

  1
  23
  456
  78910

  */

  int num = 1;
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << num++; // post increment
      num++;
    }
    cout << endl;
  }

  // Triangle pattern

  /*

     *
    ***
   *****
  *******

  */

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << ' ';
    }

    for (int k = 1; k <= 2 * i - 1; k++) // Odd
    {
      cout << '*';
    }
    cout << endl;
  }

  /*
  
  *******
   *****
    ***
     *

  */

  int n = 5;

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << ' ';
    }

    for (int k = 1; k <= 2 *i- 1; k++)
    {
      cout << '*';
    }
    cout << endl;
  }


  //Diamond pattern


  /*

      *
     ***
    *****
   *******
   *******
    *****
     ***
      *
      
   */

   int n = 10;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << ' ';
    }

    for (int k = 1; k <= 2 * i - 1; k++)
    {
      cout << '*';
    }
    cout << endl;
  }

  for (int i = n; i >=1; i--)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << ' ';
    }

    for (int k = 1; k <= 2 * i - 1; k++) // 2*(n-1)+1
    {
      cout << '*';
    }
    cout << endl;
  }

  // Butterfly Pattern
  
  /*

  *      *
  **    **
  ***  ***
  ********
  ********
  ***  ***
  **    **
  *      *

  */

  int n = 5;
  for (int i = 1; i <= n; i++)
  {
    //star
    for (int l = 1; l <= i; l++)
    {
      cout << '*';
    }

    //space
    for (int r = 1; r <= 2*(n-i); r++)
    {
      cout << ' ';
    }
    
    //star
    for (int r1 = 1; r1 <= i; r1++)
    {
      cout << '*';
    }
    cout << endl;
  }

  // // inverse
  for (int i = n; i >= 1; i--)
  {
    //star
    for (int l = 1; l <= i; l++)
    {
      cout << '*';
    }

    //space
    for (int r = 1; r <= 2*(n-i); r++)
    {
      cout << ' ';
    }
    
    //star
    for (int r1 = 1; r1 <= i; r1++)
    {
      cout << '*';
    }
    cout << endl;
  }
  

  //Rombus

  /*
  
      *****
     *****
    *****
   *****
  *****

  */

  int n = 5;
  for (int i = 1; i <= n; i++)
  {

    for (int k = 1; k <= n-i; k++)
    {
      cout << ' ';
    }
    
    for (int j = 1; j <= n; j++)

    {
      cout << '*';
    }
    cout << endl;
  }
  

   /*
  
  1
  01
  101
  0101
  10101

  */

  bool val = true;
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << val << " ";
      val = !val;
    }
    cout << endl;
  }
  


  //Palindromic pattern

  /*
  
      1
     212
    32123
   4321234
  543212345

  */

  int n = 5;
  int num = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n-i; j++)
    {
      cout << ' ';
    }

    for (int k = i; k>=1; k--)
    {
      cout << k;
    }

    for (int l = 2; l <= i; l++)
    {
      cout << l;
    }
    cout << endl;
  }
  
  return 0;
}