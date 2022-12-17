#include <stdio.h>
#include <iostream>
using namespace std;

void print(int n)
{
  if (n == 1)
  {
    cout << n << " ";
    return;
  }

  print(n - 1);
  cout << n << " ";
  return;
}

class Employee
{

private:
  int secretKey;

public:
  string name;
  int salary;

  Employee(string name, int salary, int secretKey)
  {
    this->name = name;
    this->salary = salary;
    this->secretKey = secretKey;
  }

  void printDetails()
  {
    cout << "The name of the Employee is  " << this->name << " and his salary is $" << this->salary << endl;
  }

  void getSecretKey()
  {
    cout << "The secret password is " << this->secretKey << endl;
  }
};

// Inheritance
class Enginner : public Employee
{

}

int
main()
{
  // cout<<"Hello World Mriganka" << endl;
  // cout<<"I am in the next line";

  // VARIABLES and Data Types
  //  int a = 40;
  //  cout<<a <<endl;

  // int marksOfMriganka = 83;
  // cout<<"The marks of Mriganka in Maths is "<< marksOfMriganka;

  // short b;
  // long c;
  // long long d;

  /*
    // FLOAT and DOUBLE

    float a = 23.455;
    a = 54;
    cout<<a << endl;

    double const b = 2645.55423;
    cout<<b;
    // b = 564; Constants cant be changed or reassigned
  */

  /*

    int a, b;
    cout<<"Enter first number" <<endl;
    cin>>a;
    cout<<"Enter second number" <<endl;
    cin>>b;

    cout<<"a + b = " <<a + b <<endl;
    cout<<"a - b = " <<a - b <<endl;
    cout<<"a * b = " <<a * b <<endl;
    cout<<"a / b = " <<a / b <<endl;

    // TypeCasting

    cout<<"a / b = " << (float)a  / b <<endl;

  */

  // IF ELSE STATEMENTS
  /*

  int age;
  cout << "Enter your age " << endl;
  cin >> age;

  if (age > 100)
  {
    cout << "Invalid age" << endl;
  }
  else if (age >= 18)
  {
    cout << "You can Vote" << endl;
  }
  else
  {
    cout << "You are too young to vote" << endl;
  }

  // SWITCH CASE

  switch (age)
  {
  case 60:
    cout << "You are 60 years old";
    break;
  case 10:
    cout << "You are 10 years old";
    break;

  default:
    cout << "You are neither 10 nor 60";
    break;
  }

  */

  // LOOPS

  /*
    int i = 0;
    // While Loop
    while (i <= 100)
    {
      cout << "We have reached at index " << i << endl;
      i++;
    }

    // For loop
    for (int i = 0; i < 50; i++)
    {
      cout << i * i << endl;
    }

    // Do while Loop : It will run once even if the condition is false
    do
    {
      cout << "This is index " << i << endl;
      i++;
    } while (i < 500);
  */

  // FUNCTIONS

  // print(50);

  // Array

  // int n;
  // cout << "Enter the size of array: " << endl;
  // cin >> n;
  // int arr[n];

  // for (int i = 0; i < n; i++)
  // {
  //   cout << "Enter value for " << i << "th index" << endl;
  //   cin >> arr[i];
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   cout << "The value at " << i << "th index is " << arr[i] << endl;
  // }

  // 2D array
  /*
  int arr2d[3][4] = {
      {5137, 5139, 5130, 5214},
      {1, 2, 3, 4},
      {7, 8, 9, 10}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << "The value of array at index " << i << "," << j << " is equal to: " << arr2d[i][j] << endl;
    }
  }

  */

  //  STRING

  /*
    string name = "Mriganka";
    cout << name << endl;
    cout << name.length() << endl;
    cout << name.substr(0, 1);
  */

  // POINTER
  /*
  int a = 5137;
  int *ptra;
  ptra = &a;

  cout << "The value of a is: " << a << endl;
  cout << "The value of a is: " << *ptra << endl;

  cout << "The address of a is: " << ptra << endl;
  cout << "The value of a is: " << &a << endl;
  */

  // Object of class
  /*
  Employee e1("Mriganka", 5000, 5137);
  // e1.name = "Mriganka";
  // e1.salary = 5000;
  e1.printDetails();
  // e1.secretKey;   Cannot access private variables from outside

  e1.getSecretKey(); // But the private variables can be accessed from a public method of the class
  */

  return 0;
}