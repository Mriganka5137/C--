#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int c = 5137; // Global Variable
int main()
{
  /*
  int a, b, c;

  cout << "Enter the value of a:" << endl;
  cin >> a;
  cout << "Enter the value of b:" << endl;
  cin >> b;

  c = a + b;
  cout << "The value of local variable c: " << c << endl;

  // Accessing the global variable using SCOPE RESOLUTION OPERATOR  ::c
  cout << "The value of global variable c: " << ::c << endl;
  */

  // -----------------------FLOAT AND DOUBLE -------------------
  /*
    float d = 3.14f;       //--------> f after the number represents floating number
    long double e = 3.14l; //--------> l after the decimal number represents long double

    cout << d << endl;
    cout << e << endl;

    cout << "The size of 3.14 is " << sizeof(3.14) << endl;   // By default compiler takes double value
    cout << "The size of 3.14f is " << sizeof(3.14f) << endl; // floating type
    cout << "The size of 3.14F is " << sizeof(3.14F) << endl; // floating type
    cout << "The size of 3.14l is " << sizeof(3.14l) << endl; // long double type
    cout << "The size of 3.14L is " << sizeof(3.14L) << endl; // long double type

  */

  //----------------------------  REFERENCE VARIABLE  ----------------------
  // A reference variable is a "reference" to an existing variable,
  // and it is created with the & operator:
  /*
    int rollNo = 5137;
    int &id = rollNo; // ----> Now the refernce id stores the value or points RollNO

    cout << "The roll no is : " << rollNo << endl;
    cout << "The id is : " << id << endl;
  */

  // --------------------------  TYPE CASTING -------------------
  int a = 5137;
  float b = 95.68654;

  cout << "Type Casting int to float " << float(a) << endl; // a = double now
  cout << "Type Casting float to int " << int(b) << endl;   // b = 95

  return 0;
}